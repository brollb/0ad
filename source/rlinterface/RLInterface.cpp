#include "rlinterface/RLInterface.h"
#include "simulation2/system/LocalTurnManager.h"

using grpc::ServerContext;
using boost::fibers::channel_op_status;

grpc::Status RLInterface::Connect(ServerContext* context, const ConnectRequest* req, Observation* obs) 
{
    std::cout << ">>> Aquiring lock for Connect" << std::endl;
    std::lock_guard<std::mutex> lock(m_lock);

    if (req->has_scenario())
    {
        m_GameConfig = GameConfig::from(req->scenario());
    }

    GameMessage msg = { GameMessageType::Reset };
    m_GameMessages.push(msg);

    std::string state;
    std::cout << "Waiting for game state" << std::endl;
    m_GameStates.pop(state);
    obs->set_content(state);

    std::cout << ">>> Connect Complete" << std::endl;
    return grpc::Status::OK;
}

grpc::Status RLInterface::Step(ServerContext* context, const Actions* commands, Observation* obs) 
{
    std::cout << ">>> Acquiring lock for Step" << std::endl;
    std::lock_guard<std::mutex> lock(m_lock);

    // Interactions with the game engine (g_Game) must be done in the main
    // thread as there are specific checks for this. We will pass our commands
    // to the main thread to be applied

    GameMessage msg = { GameMessageType::Commands };
    const int size = commands->actions_size();
    for (int i = 0; i < size; i++) 
    {
        std::string json_cmd = commands->actions(i).content();
        int playerid = commands->actions(i).playerid();
        msg.data.push(std::make_tuple(playerid, json_cmd));
    }
    m_GameMessages.push(msg);
    std::string state;
    m_GameStates.pop(state);
    obs->set_content(state);

    std::cout << ">>> Step Complete" << std::endl;
    return grpc::Status::OK;
}

grpc::Status RLInterface::Reset(ServerContext* context, const ResetRequest* req, Observation* obs) 
{
    std::cout << ">>> Acquiring lock for Reset" << std::endl;
    std::lock_guard<std::mutex> lock(m_lock);
    if (req->has_scenario())
    {
        m_GameConfig = GameConfig::from(req->scenario());
    }
    struct GameMessage msg = { GameMessageType::Reset };
    m_GameMessages.push(msg);

    std::string state;
    m_GameStates.pop(state);
    obs->set_content(state);

    std::cout << ">>> Reset Complete" << std::endl;
    return grpc::Status::OK;
}

grpc::Status RLInterface::GetTemplates(ServerContext* context, const GetTemplateRequest* req, Templates* res) 
{
    std::lock_guard<std::mutex> lock(m_lock);
    if (!g_Game)
    {
        debug_warn(L"Game not running. Have you started a scenario with a Reset message?");
        return grpc::Status(grpc::StatusCode::FAILED_PRECONDITION, "Game not running.");
    }

    const auto simContext = g_Game->GetSimulation2()->GetSimContext();
	CmpPtr<ICmpTemplateManager> cmpTemplateManager(simContext.GetSystemEntity());

    const int size = req->names_size();
    for (int i = 0; i < size; i++)
    {
        const std::string templateName = req->names(i);
        const CParamNode* node = cmpTemplateManager->GetTemplate(templateName);

        Template* tpl = res->add_templates();
        tpl->set_name(templateName);
        if (node != NULL)
        {
            std::string content = utf8_from_wstring(node->ToXML());
            tpl->set_content(content);
        }
    }

    return grpc::Status::OK;
}

void RLInterface::Listen(std::string server_address)
{
    grpc::ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(this);
    m_Server = builder.BuildAndStart();
    std::cout << "Server listening on " << server_address << std::endl;
}

void RLInterface::ApplyEvents()  // Apply RPC messages to the game engine
{
    const bool nonVisual = !g_GUI;
    const bool isGameStarted = g_Game && g_Game->IsGameStarted();
    if (m_NeedsGameState && isGameStarted)
    {
        m_GameStates.push(GetGameState());  // Send the game state back to the request
        m_NeedsGameState = false;
    }

    GameMessage msg;
    while (m_GameMessages.try_pop(msg) == channel_op_status::success)
    {
        std::cout << "Applying game message!" << std::endl;
        switch (msg.type)
        {
            case GameMessageType::Reset:
                {
                    if (isGameStarted)
                    {
                        EndGame();
                    }

                    m_GameConfig.nonVisual = nonVisual;
                    g_Game = new CGame(m_GameConfig.nonVisual, m_GameConfig.saveReplay);

                    ScriptInterface& scriptInterface = g_Game->GetSimulation2()->GetScriptInterface();
                    JSContext* cx = scriptInterface.GetContext();
                    JS::RootedValue attrs(cx, m_GameConfig.toJSValue(scriptInterface));

                    g_Game->SetPlayerID(m_GameConfig.playerID);
                    g_Game->StartGame(&attrs, "");

                    if (nonVisual)
                    {
                        LDR_NonprogressiveLoad();
                        ENSURE(g_Game->ReallyStartGame() == PSRETURN_OK);
                        m_GameStates.push(GetGameState());  // Send the game state back to the request
                    }
                    else
                    {
                        JS::RootedValue initData(cx);
                        scriptInterface.Eval("({})", &initData);
                        scriptInterface.SetProperty(initData, "attribs", attrs);

                        JS::RootedValue playerAssignments(cx);
                        scriptInterface.Eval("({})", &playerAssignments);
                        scriptInterface.SetProperty(initData, "playerAssignments", playerAssignments);

                        g_GUI->SwitchPage(L"page_loading.xml", &scriptInterface, initData);
                        m_NeedsGameState = true;
                    }
                }
                break;

            case GameMessageType::Commands:
                if (!isGameStarted)
                {
                    LOGERROR("Cannot apply game commands w/o running game. Ignoring...");
                    continue;
                }

                const ScriptInterface& scriptInterface = g_Game->GetSimulation2()->GetScriptInterface();
                CLocalTurnManager* turnMgr = static_cast<CLocalTurnManager*>(g_Game->GetTurnManager());

                // Apply the commands
                while (msg.data.size() > 0) 
                {
                    int playerid = std::get<0>(msg.data.front());
                    std::string json_cmd = std::get<1>(msg.data.front());
                    msg.data.pop();

                    JSContext* cx = scriptInterface.GetContext();
                    JS::RootedValue command(cx);
                    std::cout << json_cmd << std::endl;
                    scriptInterface.ParseJSON(json_cmd, &command);
                    // TODO: Make our own turn manager?
                    turnMgr->PostCommand(playerid, command);
                }

                // Step the game engine
                const double deltaRealTime = DEFAULT_TURN_LENGTH_SP;
                if (nonVisual)
                {
                    const double deltaSimTime = deltaRealTime * g_Game->GetSimRate();
                    size_t maxTurns = (size_t)g_Game->GetSimRate();
                    g_Game->GetTurnManager()->Update(deltaSimTime, maxTurns);
                }
                else
                {
                    g_Game->Update(deltaRealTime);
                }
                m_GameStates.push(GetGameState());  // Send the game state back to the request
                break;
        }
    }
}

std::string RLInterface::GetGameState()
{
    const ScriptInterface& scriptInterface = g_Game->GetSimulation2()->GetScriptInterface();
    const auto simContext = g_Game->GetSimulation2()->GetSimContext();
    CmpPtr<ICmpAIInterface> cmpAIInterface(simContext.GetSystemEntity());
    JSContext* cx = scriptInterface.GetContext();
    JS::RootedValue state(cx);
    cmpAIInterface->GetFullRepresentation(&state, true);
    return scriptInterface.StringifyJSON(&state, false);
}
