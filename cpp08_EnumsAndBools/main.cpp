#include "./src/enum.h"

int main()
{

    std::cout << hellmath::display_post(hellmath::AccountStatus::troll, hellmath::AccountStatus::troll) << std::endl;
    std::cout << hellmath::display_post(hellmath::AccountStatus::troll, hellmath::AccountStatus::guest) << std::endl;
    std::cout << hellmath::display_post(hellmath::AccountStatus::guest, hellmath::AccountStatus::troll) << std::endl;
}