#include <iostream>
#include <cmath>

const int DAYOFWORKINHOURS{8};
const int DAYOFWORKINMONTH = {22};

double daily_rate(double hourly_rate)
{
    return hourly_rate * DAYOFWORKINHOURS;
}

double apply_discount(double before_discount, double discount)
{
    return before_discount - before_discount * (discount / 100);
}

double monthly_rate(double hourly_rate, double discount)
{
    double monthlyRate = daily_rate(hourly_rate) * DAYOFWORKINMONTH;
    return std::ceil(apply_discount(monthlyRate, discount));
}

double days_in_budget(double budget, double hourly_rate, double discount)
{
    double dailyRate = daily_rate(hourly_rate);
    double discountedDailyRate = apply_discount(dailyRate, discount);
    return floor(budget / discountedDailyRate);
}

int main()
{
    double dbl = 12.4;
    std::cout << std::ceil(dbl) << std::endl;
    std::cout << std::floor(dbl) << std::endl;
    std::cout << std::round(dbl) << std::endl;
    std::cout << days_in_budget(20000, 80, 11) << std::endl;
}