#include <iostream>
#include "my_math.h"
#include "pyhsics.h"
#include "science.h"
#include "config.h"

using namespace std;
int main()
{
    cout << "here-we-are" << endl;
    cout << "my_math_add" << my_math::add(21, 21) << endl;
    cout << "pyhsics_add" << pyhsics::add(76, 43) << endl;
    cout << "science_add" << science::add(90, 12) << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Project Name:" << project_name << endl;
    cout << "Project Version:" << project_version << endl;
}