#ifndef SCHOOL_COURSE_H
#define SCHOOL_COURSE_H

#include<vector>

namespace school {

class Course 
{
public:
    virtual ~Course() = default;
    virtual double average() const = 0;
};

class DataStructures: public Course 
{
public:
    DataStructures(double note_work1, double note_work2, double note_work3, double note_exam):
        grade{std::vector<double>{note_work1, note_work2, note_work3, note_exam}}
    {}

    double average() const;

private:
    std::vector<double>grade;
};

class Calculus: public Course 
{
    Calculus(double note_exam1, double note_exam2, double note_exam3):
        grade{std::vector<double>{note_exam1, note_exam2, note_exam3}}
    {}

    double average() const;

private:
    std::vector<double>grade;
};

}

#endif