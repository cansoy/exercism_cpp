#include "power_of_troy.h"

namespace troy
{
    void give_new_artifact(human &hmn, const std::string &art_name)
    {
        artifact art{art_name};
        hmn.possession = std::make_unique<artifact>(art);
    }

    void exchange_artifacts(std::unique_ptr<artifact> &first,
                            std::unique_ptr<artifact> &second)
    {
        auto swap_first = std::move(first);
        auto swap_second = std::move(second);
        first = std::move(swap_second);
        second = std::move(swap_first);
    }

    void manifest_power(human &hmn, std::string power_name)
    {
        power pwr{power_name};
        hmn.own_power = std::make_shared<power>(pwr);
    }

    void use_power(const human &caster, human &target)
    {
        target.influenced_by = caster.own_power;
    }

    size_t power_intensity(const human &owner)
    {
        return owner.own_power.use_count();
    }
}