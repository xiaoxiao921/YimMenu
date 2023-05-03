#pragma once

#include "backend/player_command.hpp"

namespace big
{
	class give_armor : public player_command
	{
		using player_command::player_command;

		virtual CommandAccessLevel get_access_level();

		virtual void execute(player_ptr player, const std::vector<std::uint64_t>& _args, const std::shared_ptr<command_context> ctx);
	};

	namespace cmd
	{
		inline give_armor g_give_armor("givearmor", "Give Armor", "Gives the player some armor", 0);
	}
}