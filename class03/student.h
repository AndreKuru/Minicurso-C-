#ifndef SCHOOL_STUDENT_H
#define SCHOOL_STUDENT_H


#include <iostream>
#include <string>

namespace school {

class Student {
public:
    Student(std::string name, int year):
        name_{name},
        year{year}
    {}


    Student(std::string name, int year, double note1, double note2, double note3):
        name_{name},
        year{year},
        note1{note1},
        note2{note2},
        note3{note3}
    {}

    std::string name() const {
        return name_;
    }

    int years_enrolled(int actual_year);
    double average();

private:
    std::string name_;
    int year;
    double note1{0}, note2{0}, note3{0};
};

}
#endif