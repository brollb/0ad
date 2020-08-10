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

#include "simulation2/helpers/Player.h"

#include <condition_variable>
#include <mutex>
#include <vector>

struct ScenarioConfig
{
	bool saveReplay;
	player_id_t playerID;
	std::string content;
};
struct RLGameCommand
{
	int playerID;
	std::string json_cmd;
};

enum class GameMessageType { Reset, Commands };
struct GameMessage {
	GameMessageType type;
	std::vector<RLGameCommand> commands;
};

extern void EndGame();

struct mg_context;

/**
 * Implements an interface providing fundamental capabilities required for reinforcement
 * learning (over HTTP).
 *
 * This consists of enabling an external script to configure the scenario (via Reset) and
 * then step the game engine manually and apply player actions (via Step). The interface
 * also supports querying unit templates to provide information about max health and other
 * potentially relevant game state information.
 */
class RLInterface
{
	public:

		std::string Step(const std::vector<RLGameCommand>& commands);
		std::string Reset(const ScenarioConfig* scenario);
		std::vector<std::string> GetTemplates(const std::vector<std::string>& names) const;

		void EnableHTTP(const char* server_address);
		std::string SendGameMessage(const GameMessage& msg);
		bool TryGetGameMessage(GameMessage& msg);
		void TryApplyMessage();
		std::string GetGameState() const;
		bool IsGameRunning() const;

	private:
		mg_context* m_MgContext = nullptr;
		const GameMessage* m_GameMessage = nullptr;
		std::string m_GameState;
		bool m_NeedsGameState = false;
		mutable std::mutex m_Lock;
		std::mutex m_MsgLock;
		std::condition_variable m_MsgApplied;
		ScenarioConfig m_ScenarioConfig;
};

extern RLInterface* g_RLInterface;

#endif // INCLUDED_RLINTERFACE
