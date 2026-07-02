#include <iostream>
#include "speedywagon.h"

int main()
{
    // ============================================================
    // Task 1 — connection_check
    // ============================================================
    std::cout << "Task 1 - connection_check\n";

    speedywagon::pillar_men_sensor sensor{};
    speedywagon::pillar_men_sensor *ptr{&sensor};

    std::cout << speedywagon::connection_check(ptr) << std::endl;     // expected: 1
    std::cout << speedywagon::connection_check(nullptr) << std::endl; // expected: 0

    // ============================================================
    // Task 2 — activity_counter
    // ============================================================
    std::cout << "Task 2 - activity_counter\n";

    speedywagon::pillar_men_sensor sensor_array[3] = {
        {0},
        {101},
        {22}};

    std::cout << speedywagon::activity_counter(sensor_array, 3) << std::endl; // expected: 123

    // ============================================================
    // Task 3 — alarm_control
    // ============================================================
    std::cout << "Task 3 - alarm_control\n";

    speedywagon::pillar_men_sensor active_sensor{10};
    speedywagon::pillar_men_sensor silent_sensor{0};
    speedywagon::pillar_men_sensor negative_sensor{-3};

    std::cout << speedywagon::alarm_control(&active_sensor) << std::endl;   // expected: 1
    std::cout << speedywagon::alarm_control(&silent_sensor) << std::endl;   // expected: 0
    std::cout << speedywagon::alarm_control(&negative_sensor) << std::endl; // expected: 0
    std::cout << speedywagon::alarm_control(nullptr) << std::endl;          // expected: 0

    // ============================================================
    // Task 4 — uv_alarm
    // ============================================================
    std::cout << "Task 4 - uv_alarm\n";

    speedywagon::pillar_men_sensor uv_sensor_false{1, "test", {10, 20, 30}};

    std::cout << speedywagon::uv_alarm(&uv_sensor_false) << std::endl; // expected: 0
    std::cout << speedywagon::uv_alarm(nullptr) << std::endl;          // expected: 0

    speedywagon::pillar_men_sensor uv_sensor_true{0, "test", {10, 20, 30}};

    std::cout << speedywagon::uv_alarm(&uv_sensor_true) << std::endl; // expected: 1
}