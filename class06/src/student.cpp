#include "student.h"

namespace school {

int Student::years_enrolled(int actual_year) const{
    return actual_year - entrance_year;
}

/*
double Student::average() const{
    auto total = 0.0;

    for (auto n : notes) {
        total += n;
    }
    return total / notes.size();
}
*/

}
