#ifndef SCHOOL_STUDENT_H
#define SCHOOL_STUDENT_H


#include <string>
#include <vector>

namespace school {

class Student {
public:
    Student(std::string const& name, int entrance_year):
        name_{name},
        entrance_year{entrance_year},
        notes{std::vector<double> {}}
    {}


    Student(std::string const& name, int entrance_year, std::vector<double> const& notes):
        name_{name},
        entrance_year{entrance_year},
        notes{notes}
    {}

    std::string const& name() const {
        return name_;
    }

    int years_enrolled(int actual_year) const;
    double average() const;

private:
    std::string name_;
    int entrance_year;
    std::vector<double> notes;
};

}
#endif