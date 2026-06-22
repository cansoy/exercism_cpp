#include <iostream>
#include "lasagna_master.h"

int main()
{
    std::vector<std::string> myList{"noodles", "meat", "sauce", "mozzarella", "?"};
    std::string secretIngredient{"spice melange"};

    lasagna_master::addSecretIngredient(myList, secretIngredient);

    std::cout << myList.back() << '\n';
}