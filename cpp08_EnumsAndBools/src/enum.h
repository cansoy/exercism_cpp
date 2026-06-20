#ifndef ENUM_H
#define ENUM_H
#include <iostream>

namespace hellmath
{
    enum class AccountStatus
    {
        troll,
        guest,
        user,
        mod
    };

    enum class Action
    {
        read,
        write,
        remove
    };

    bool display_post(AccountStatus poster, AccountStatus viewer);
    bool permission_check(Action action, AccountStatus status);
    bool valid_player_combination(AccountStatus player1, AccountStatus player2);
    bool has_priority(AccountStatus account1, AccountStatus account2);
}

#endif