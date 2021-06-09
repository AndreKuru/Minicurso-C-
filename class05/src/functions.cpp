#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
#include <sstream>
#include <fstream>

using namespace std::string_literals;
using school::Student;

double get_double(std::istream& in)
{
    while(true) {
        // Read a line from the input
        auto buf = ""s;
        std::getline(in, buf);

        // Check if the input is a integer
        auto sttr = std::stringstream{buf};
        auto result = 0.0;
        sttr >> result;

        if (sttr.good() or sttr.eof()) {
            return result;
        }
    }
}

int get_int(std::istream& in)
{
    while(true) {
        // Read a line from the input
        auto buf = ""s;
        std::getline(in, buf);

        // Check if the input is a integer
        auto sttr = std::stringstream{buf};
        auto result = 0;
        sttr >> result;

        if (sttr.good() or sttr.eof()) {
            return result;
        }
    }
}

double ask_double(std::istream& in, std::string question)
{
    std::cout << question;
    auto answer = get_double(in);

    // Only if is a fstream
    if (dynamic_cast<std::ifstream*>(&in) != nullptr) {
        std::cout << answer << "\n";
    }

    return answer;
}

int ask_int(std::istream& in, std::string question)
{
    std::cout << question;
    auto answer = get_int(in);

    // Only if is a fstream
    if (dynamic_cast<std::ifstream*>(&in) != nullptr) {
        std::cout << answer << "\n";
    }

    return answer;
}

std::string ask_string(std::istream& in, std::string question)
{
    std::cout << question;

    // Read a line from the input
    auto answer = ""s;
    std::getline(in, answer);

    // Only if is a fstream
    if (dynamic_cast<std::ifstream*>(&in) != nullptr) {
        std::cout << answer << "\n";
    }

    return answer;
}

std::vector<Student> school::read_students(std::istream& in)
{
    using namespace std::string_literals;

    auto number_students = ask_int(in, "How many students will be registered: "s );

    auto students = std::vector<Student> {};

    for (auto i = 0u; i < number_students; ++i) {
        auto student_name =  ask_string(in, "Student's name: "s);
        auto entrance_year = ask_int(in, "Student's entrance year: "s);
        auto note1 =         ask_double(in, "Student's note(1): "s);
        auto note2 =         ask_double(in, "Student's note(2): "s);
        auto note3 =         ask_double(in, "Student's note(3): "s);

        students.push_back(
            Student(student_name, entrance_year, {note1, note2, note3})
            );
    }

    return students;
}

std::vector<Student> school::approved(std::vector<Student> const& students)
{
    auto approveds = std::vector<Student> {};

    for (auto& student : students) {
        if (student.average() >= 6) {
            approveds.push_back(student);
        }
    }

    return approveds;
}

std::vector<Student> school::dismissed_by_time(std::vector<Student> const& students, int actual_year)
{
    auto dismisseds = std::vector<Student> {};
    
    for (auto& student : students) {
        if (student.years_enrolled(actual_year) >= 7) {
            dismisseds.push_back(student);
        }
    }

    return dismisseds;
}