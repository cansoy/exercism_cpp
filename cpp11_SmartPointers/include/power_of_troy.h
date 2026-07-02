#pragma once

#include <iostream>
#include <string>
#include <memory>

namespace troy
{
    struct artifact
    {
        std::string name;
    };

    struct power
    {
        std::string effect;
    };

    struct human
    {
        std::unique_ptr<artifact> possession{nullptr};
        std::shared_ptr<power> own_power{nullptr};
        std::shared_ptr<power> influenced_by{nullptr};
    };

    void give_new_artifact(human &, const std::string &);
    void exchange_artifacts(std::unique_ptr<artifact> &, std::unique_ptr<artifact> &);
    void manifest_power(human &, std::string);
    void use_power(const human &, human &);
    size_t power_intensity(const human &);

}
