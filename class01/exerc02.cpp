#include <iostream>

int main()
{   
    for (auto i = 3u; i <= 100; i++) {
        if (!(i % 3) && !(i % 5)) {
            std::cout << "fizzbuzz";
        } else if (!(i % 3)) {
            std::cout << "fizz";
        } else if (!(i % 5)) {
            std::cout << "buzz";
        } else {
            std::cout << i;
        }
        std::cout << "\n";
    }
}
