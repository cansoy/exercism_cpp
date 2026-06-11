#include <iostream>
#include <string>

std::string log_level(std::string log)
{
    std::size_t idx = log.find("]: ");
    return log.substr(1, idx - 1);
}

std::string message(std::string log)
{
    std::size_t idx = log.find("]: ");
    return log.substr(idx + 3);
}

std::string reformat(std::string log)
{
    return message(log) + " (" + log_level(log) + ")";
}

int main()
{
    std::string log{"[ERROR]: Disk almost full"};
    std::cout << log_level(log) << std::endl;
    std::cout << message(log) << std::endl;
    std::cout << reformat(log) << std::endl;

    log = "[ERROR]: Disk almost full";
    std::cout << log_level(log) << std::endl;
    std::cout << message(log) << std::endl;
    std::cout << reformat(log) << std::endl;

    log = "[ANYTHINGELSE]: Disk almost full";
    std::cout << log_level(log) << std::endl;
    std::cout << message(log) << std::endl;
    std::cout << reformat(log) << std::endl;
}