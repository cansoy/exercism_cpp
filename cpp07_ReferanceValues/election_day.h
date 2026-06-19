// #pragma once
#ifndef ELECTION_DAY_H
#define ELECTION_DAY_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

namespace election_day
{
    struct ElectionResult
    {
        std::string name{};
        int votes{};
    };
    int vote_count(const ElectionResult &);
    void increment_vote_count(ElectionResult &, int);
    ElectionResult &determine_result(std::vector<ElectionResult> &);
}

#endif