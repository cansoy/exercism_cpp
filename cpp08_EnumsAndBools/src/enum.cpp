#include "./enum.h"

namespace hellmath
{
    bool display_post(AccountStatus poster, AccountStatus viewer)
    {
        if (poster == AccountStatus::troll)
        {
            return viewer == AccountStatus::troll;
        }

        return true;
    }

    bool permission_check(Action action, AccountStatus status)
    {
        if (status == AccountStatus::guest)
        {
            return action == Action::read;
        }
        else if (status == AccountStatus::user || status == AccountStatus::troll)
        {
            return action == Action::read || action == Action::write;
        }
        else if (status == AccountStatus::mod)
        {
            // return action == Action::read || action == Action::write || action == Action::remove;
            return true;
        }
        return false;
    }

    bool valid_player_combination(AccountStatus player1, AccountStatus player2)
    {
        if (player1 == AccountStatus::guest || player2 == AccountStatus::guest)
        {
            return false;
        }

        if (player1 == AccountStatus::troll || player2 == AccountStatus::troll)
        {
            return player1 == AccountStatus::troll && player2 == AccountStatus::troll;
        }

        return true;
    }

    bool has_priority(AccountStatus account1, AccountStatus account2)
    {
        int account_1_priority{priority(account1)};
        int account_2_priority{priority(account2)};

        return account_1_priority > account_2_priority;
    }

}

namespace
{
    int priority(hellmath::AccountStatus status)
    {
        if (status == hellmath::AccountStatus::troll)
        {
            return 0;
        }
        else if (status == hellmath::AccountStatus::guest)
        {
            return 1;
        }
        else if (status == hellmath::AccountStatus::user)
        {
            return 2;
        }
        else if (status == hellmath::AccountStatus::mod)
        {
            return 3;
        }
        return -1;
    }
}
