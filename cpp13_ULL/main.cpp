#include <iostream>
#include "grains.h"

int main()
{
    std::cout << grains::square(1) << std::endl;
    std::cout << grains::square(2) << std::endl;
    std::cout << grains::square(3) << std::endl;
    std::cout << grains::square(4) << std::endl;
    std::cout << grains::total() << std::endl;
}