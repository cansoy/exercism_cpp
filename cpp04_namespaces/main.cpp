#include <iostream>

namespace family_a
{
    int bank_number_part()
    {
        return 100;
    }
    int blue_function()
    {
        return 1;
    }
    int red_function()
    {
        return 1;
    }
}

namespace family_b
{
    int bank_number_part()
    {
        return 200;
    }
    int blue_function()
    {
        return 1;
    }
    int red_function()
    {
        return 1;
    }
}

namespace family_c
{
    int bank_number_part()
    {
        return 300;
    }
    int blue_function()
    {
        return 1;
    }
    int red_function()
    {
        return 1;
    }
}

namespace estate_executor
{
    int assemble_account_number(int secret_modifier)
    {
        return family_a::bank_number_part() +
               family_b::bank_number_part() +
               family_c::bank_number_part() +
               secret_modifier;
    }
    int assemble_code()
    {
        int blue_sum = family_a::blue_function() + family_b::blue_function() + family_c::blue_function();

        int red_sum = family_a::red_function() + family_b::red_function() + family_c::red_function();

        return blue_sum * red_sum;
    }

}

namespace bank
{
    int assemble_account_number(int secret_modifier)
    {
        return 0;
    }
}

int main()
{
}