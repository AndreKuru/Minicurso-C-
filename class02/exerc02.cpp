#include <iostream>

int count_occurences(char letter, const std::string& word) {
    auto count = 0u;
    for (auto c: word) {
        if (c == letter) {
            ++count;
        }
    }

    return count;
}

int main()
{
    using namespace std::string_literals;

    const auto word = "evidentemente"s;
    const auto letter = 'e';
    std::cout << "number of " << letter << " in " << word << ": "
              << count_occurences(letter, word) << '\n';
}