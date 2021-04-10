#include <iostream>

int fib_up_to(int n)
{
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        auto fator0 = 0u;
        auto fator1 = 1u;
        for (auto i = 2u; i < n; ++i){
            if (i % 2 == 0){
                fator0 = fator0 + fator1;
            } else {
                fator1 = fator0 + fator1;
            }
        }
        if (fator0 > fator1) {
            return fator0;
        } else {
            return fator1;
        }
    }
}

int fib_less_than(int x)
{
    if (x == 0) {
        return 0;
    } else if (x == 1) {
        return 1;
    } else {
        auto fator0 = 0u;
        auto fator1 = 1u;
        while (1) {
            fator0 = fator0 + fator1;
            if (fator0 > x) {
                return fator1;
            }

            fator1 = fator0 + fator1;
            if (fator1 > x) {
                return fator0;
            }
        }
    }
}

int main()
{
    std::cout << fib_up_to(10) << "\n";
    std::cout << fib_less_than(1024) << "\n";
}
