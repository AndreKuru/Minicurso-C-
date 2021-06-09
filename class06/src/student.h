#ifndef SCHOOL_STUDENT_H
#define SCHOOL_STUDENT_H

#include "course.h"

#include <string>
#include <vector>
#include <memory>

namespace school {

class Student {
public:
    Student(std::string const& name, int entrance_year, std::vector<std::unique_ptr<Course>> const& grade):
        name_{name},
        entrance_year{entrance_year},
        grade{grade}
    {}

    std::string const& name() const {
        return name_;
    }

    int years_enrolled(int actual_year) const;
    double average() const;

private:
    std::string name_;
    int entrance_year;
    std::vector<std::unique_ptr<Course>> grade;
};

}
#endif