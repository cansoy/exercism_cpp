#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <string>

const int PERFECT_SCORE = 100;

std::vector<int> static_cast_int(const std::vector<double> &dbl)
{
    std::vector<int> staticCastInt{};
    for (double d : dbl)
        staticCastInt.push_back(static_cast<int>(d));

    return staticCastInt;
}

std::vector<int> successful_scores(const std::vector<int> &scores)
{
    std::vector<int> successfulScores{};
    for (int i : scores)
        if (i > 40)
            successfulScores.push_back(i);

    return successfulScores;
}

std::vector<int> failed_scores(const std::vector<int> &scores)
{
    std::vector<int> failedScores{};
    for (int i : scores)
        if (i <= 40)
            failedScores.push_back(i);

    return failedScores;
}

int count_failed_students(const std::vector<int> &student_scores)
{
    return failed_scores(student_scores).size();
}

int count_successful_students(const std::vector<int> &student_scores)
{
    return successful_scores(student_scores).size();
}

std::array<int, 4> letter_grades(int highest_score)
{
    std::array<int, 4> grades{};
    int lowestGrade{41};
    int increase = (highest_score - 40) / 4;
    for (size_t i = 0; i < grades.size(); i++)
    {
        grades.at(i) = lowestGrade;
        lowestGrade += increase;
    }
    return grades;
}

std::vector<std::string> student_ranking(const std::vector<int> &scores,
                                         const std::vector<std::string> &names)
{
    std::vector<std::string> studentRanking{};
    std::string item{};
    for (size_t i = 0; i < scores.size(); i++)
    {
        item = std::to_string(i + 1) + ". " + names.at(i) + ": " + std::to_string(scores.at(i));
        studentRanking.push_back(item);
    }

    return studentRanking;
}

std::string perfect_score(
    const std::vector<int> &student_scores,
    const std::vector<std::string> &student_names)
{
    auto max_it = std::max_element(student_scores.begin(), student_scores.end());
    int index = std::distance(student_scores.begin(), max_it);
    if (*max_it == PERFECT_SCORE)
        return student_names.at(index);
    return "";
}
