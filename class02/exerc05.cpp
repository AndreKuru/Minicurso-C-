#include <iostream>
#include <vector>

void remove_duplicates(std::vector<int>& sequence)
{
    auto i = 1u;

    while (i < sequence.size()) {
        if (sequence[i] == sequence[i-1]) {
            sequence.erase(sequence.begin() + i);
        } else {
            ++i;
        }
    }
}

int main()
{
    auto ints = std::vector<int>{1, 1, 1, 2, 3, 3, 4, 1, 1} ;

    remove_duplicates(ints);

    for (auto i: ints) {
        std::cout << i << '\n';
    }
}