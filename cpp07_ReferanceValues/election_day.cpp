#include "./election_day.h"

namespace election_day
{
    int vote_count(const ElectionResult &result)
    {
        return result.votes;
    }
    void increment_vote_count(ElectionResult &result, int add_vote)
    {
        result.votes += add_vote;
    }
    ElectionResult &determine_result(std::vector<ElectionResult> &results)
    {
        auto winner = std::max_element(results.begin(), results.end(),
                                       [](const auto &first, const auto &second)
                                       {
                                           return first.votes < second.votes;
                                       });
        winner->name = "President " + winner->name;
        return *winner;
    }
}