#include <iostream>
#include <vector>

std::vector<int> remove_duplicates(std::vector<int> sequence)
{
    auto i = 1u;

    while (i < sequence.size()) {
        if (sequence[i] == sequence[i-1]) {
            sequence.erase(sequence.begin() + i);
        } else {
            ++i;
        }
    }
    
    return sequence;
}

int main()
{
    for (auto i: remove_duplicates({1, 1, 1, 2, 3, 3, 4, 1, 1})) {
        std::cout << i << '\n';
    }
}