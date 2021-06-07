#include <iostream>
#include <string>
#include <vector>

#include "student.h"
#include "functions.h"

int main()
{
    using namespace std::string_literals;
    using school::Student;

    // TODO: initialize a vector called `students` here
    auto students = std::vector<Student> {
        Student("Carol", 2016, {9, 9.5, 9.6}),
        Student("Caldas", 2015, {7, 8, 9.3}),
        Student("Santos", 2010, {6, 5, 6.3})
    };

    for (auto s: school::approved(students)) {
        std::cout << s.name()
                  << " is approved by grade with average "
                  << s.average() << ".\n";
    }

    for (auto s: school::dismissed_by_time(students, 2019)) {
        std::cout << s.name()
                  << " was dismissed for being in the course for too long: "
                  << s.years_enrolled(2019) << " years.\n";
    }

}
