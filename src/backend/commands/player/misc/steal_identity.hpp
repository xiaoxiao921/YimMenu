#pragma once

#include "backend/player_command.hpp"

namespace big
{
	class steal_identity : public player_command
	{
		using player_command::player_command;

		virtual void execute(player_ptr player, const std::vector<std::uint64_t>& _args, const std::shared_ptr<command_context> ctx);
	};

	namespace cmd
	{
		inline steal_identity g_steal_identity("copymodel", "Steal Identity", "Copies the player's model to your ped", 0, false); // do we really need this?
	}
}