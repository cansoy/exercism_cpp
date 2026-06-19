#include "./election_day.h"

int main()
{
    election_day::ElectionResult sanchez{"Pedro", 471};
    election_day::ElectionResult wheatley{"Summer", 340};
    election_day::ElectionResult cans{"Cansoy", 940};
    election_day::ElectionResult newo{"Newone", 640};

    std::vector<election_day::ElectionResult> final_count{sanchez, wheatley, cans, newo};

    election_day::ElectionResult &winner = determine_result(final_count);

    std::cout << winner.name << '\n';
    std::cout << winner.votes << '\n';
    std::cout << final_count[2].name << '\n';
}