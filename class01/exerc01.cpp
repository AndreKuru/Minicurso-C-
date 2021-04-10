#include <iostream>

int main()
{   
    for (auto i = 1u; i <= 100; i++) {
        if (i % 2 == 0) {
            std::cout << i << "\n";
        }
    }
}
