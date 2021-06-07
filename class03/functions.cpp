#include <vector>
#include "functions.h"

using school::Student;

std::vector<Student> school::approved(std::vector<Student> const& students) {
    auto approveds = std::vector<Student> {};

    for (auto& student : students) {
        if (student.average() >= 6) {
            approveds.push_back(student);
        }
    }

    return approveds;
}

std::vector<Student> school::dismissed_by_time(std::vector<Student> const& students, int actual_year) {
    auto dismisseds = std::vector<Student> {};
    
    for (auto& student : students) {
        if (student.years_enrolled(actual_year) > 7) {
            dismisseds.push_back(student);
        }
    }

    return dismisseds;
}

