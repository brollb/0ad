/* Copyright (C) 2020 Wildfire Games.
 * This file is part of 0 A.D.
 *
 * 0 A.D. is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * 0 A.D. is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with 0 A.D.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef INCLUDED_RLINTERFACE
#define INCLUDED_RLINTERFACE

#include "lib/precompiled.h"
#include "lib/external_libraries/libsdl.h"
#include "simulation2/Simulation2.h"
#include "simulation2/components/ICmpAIInterface.h"
#include "simulation2/components/ICmpTemplateManager.h"
#include "simulation2/system/TurnManager.h"
#include "ps/Game.h"
#include "ps/Loader.h"
#include "gui/GUIManager.h"
#include "ps/VideoMode.h"
#include "ps/GameSetup/GameSetup.h"
#include "ps/ThreadUtil.h"
#include <condition_variable>
#include <mutex>
#include <queue>
#include <tuple>

struct ScenarioConfig {
	bool saveReplay;
	player_id_t playerID;
	std::string content;
};
struct Command {
	int playerID;
	std::string json_cmd;
};

enum GameMessageType { Reset, Commands };
struct GameMessage {
	GameMessageType type;
	std::vector<Command> commands;
};

extern void EndGame();

struct mg_context;

class RLInterface
{

	public:

		std::string Step(const std::vector<Command> commands);
		std::string Reset(const ScenarioConfig* scenario);
		std::vector<std::string> GetTemplates(const std::vector<std::string> names);

		void EnableHTTP(std::string server_address);
		std::string SendGameMessage(const GameMessage msg);
		bool TryGetGameMessage(GameMessage& msg);
		void TryApplyMessage();
		std::string GetGameState();
		bool IsGameRunning();

	private:
		mg_context* m_MgContext = nullptr;
		unsigned int m_Turn = 0;
		const GameMessage* m_GameMessage = nullptr;
		std::string m_GameState;
		bool m_NeedsGameState = false;
		std::mutex m_lock;
		std::mutex m_msgLock;
		std::condition_variable m_msgApplied;
		ScenarioConfig m_ScenarioConfig;
};
#endif // INCLUDED_RLINTERFACE
