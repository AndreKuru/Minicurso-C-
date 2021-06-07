#include <vector>
#include "functions.h"

namespace school {
std::vector<Student> approved(std::vector<Student> const& students) {
    auto approveds = std::vector<Student> {};

    for (auto& student : students) {
        if (student.average() >= 6) {
            approveds.push_back(student);
        }
    }

    return approveds;
}

std::vector<Student> dismissed_by_time(std::vector<Student> const& students, int actual_year) {
    auto dismisseds = std::vector<Student> {};
    
    for (auto& student : students) {
        if (student.years_enrolled(actual_year) > 7) {
            dismisseds.push_back(student);
        }
    }

    return dismisseds;
}


}