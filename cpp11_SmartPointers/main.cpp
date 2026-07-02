#include "power_of_troy.h"

int main()
{
    troy::human jean_grey{};
    troy::manifest_power(jean_grey, "uplifting personality");

    troy::human scott{};
    troy::human logan{};
    troy::human ororo{};

    troy::use_power(jean_grey, ororo);
    troy::use_power(jean_grey, logan);
    troy::use_power(jean_grey, scott);

    std::cout << troy::power_intensity(jean_grey) << '\n';
}