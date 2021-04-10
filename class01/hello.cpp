#include <iostream> // std::cout
#include <string>   // std::string

int main() {
    int year = 2021;
    int age = 24;
    std::string name = "André";
    std::cout   << "Hello, " << name
                << ". I see you were born in "
                << year - age << ".\n";
}
