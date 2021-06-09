#include "course.h"

double school::DataStructures::average() const
{
    auto result = (grade[1] + grade[2] + grade[3]) / 3 * 0.8 
                 + grade[4] * 0.2
                 ;

    return result;
};

double school::Calculus::average() const
{
    auto result = (grade[1] + grade[2] + grade[3]) / 3;

    return result;
};