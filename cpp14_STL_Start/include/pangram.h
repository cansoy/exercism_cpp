#pragma once

#include <iostream>
#include <string>
#include <algorithm>

namespace pangram
{
    enum class flavor
    {
        exist_all,
        not_pangram
    };

    bool is_pangram(const std::string &str);
    flavor enum_pangram(const std::string &str);
}