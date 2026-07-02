#include "speedywagon.h"

namespace speedywagon
{

    bool connection_check(pillar_men_sensor *sensor)
    {
        return sensor != nullptr;
    }

    int activity_counter(pillar_men_sensor *sensor_array, std::size_t capacity)
    {
        int total_activity{0};
        for (std::size_t i = 0; i < capacity; ++i)
        {
            total_activity += sensor_array[i].activity;
        }
        return total_activity;
    }

    bool alarm_control(pillar_men_sensor *sensor)
    {
        if (sensor == nullptr)
        {
            return false;
        }
        return sensor->activity > 0;
    }

    bool uv_alarm(pillar_men_sensor *sensor)
    {
        if (sensor == nullptr)
        {
            return false;
        }

        int uv_lights = uv_light_heuristic(&sensor->data);
        return uv_lights > sensor->activity;
    }

    int uv_light_heuristic(std::vector<int> *data_array)
    {
        double avg{};
        for (auto element : *data_array)
        {
            avg += element;
        }
        avg /= data_array->size();
        int uv_index{};
        for (auto element : *data_array)
        {
            if (element > avg)
                ++uv_index;
        }
        return uv_index;
    }
}
