#ifndef DOCTOR_DATA_H
#define DOCTOR_DATA_H

#include <string>

namespace star_map
{
    enum class System
    {
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven
{
    class Vessel
    {
    public:
        std::string name{};
        int generation{};
        star_map::System current_system{star_map::System::Sol};
        int busters{0};

        Vessel(std::string name, int generation, star_map::System current_system = star_map::System::Sol);
        Vessel replicate(std::string new_name) const;
        void make_buster();
        bool shoot_buster();
    };
    bool in_the_same_system(const Vessel &first, const Vessel &second);
    std::string get_older_bob(const Vessel &first, const Vessel &second);

}
#endif