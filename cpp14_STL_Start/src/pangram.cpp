#include "pangram.h"

namespace pangram
{
    bool is_pangram(const std::string &str)
    {
        std::string new_str{};

        for (unsigned char ch : new_str)
        {
            if (std::isalpha(ch))
                new_str.push_back(ch);
        }

        std::transform(new_str.begin(), new_str.end(), new_str.begin(),
                       [](unsigned char ch)
                       {
                           return std::tolower(ch);
                       });

        std::sort(new_str.begin(), new_str.end());
        auto new_end = std::unique(new_str.begin(), new_str.end());
        new_str.erase(new_end, new_str.end());

        return new_str.size() == 26;
    }

    flavor enum_pangram(const std::string &str)
    {

        bool is_okey{is_pangram(str)};
        return is_okey ? flavor::exist_all : flavor::not_pangram;
    }

}