#include <iostream>
#include <string>

std::string check_palindrome (std::string word){
    auto word_inverse = word;
    for (auto i = 0u; i < word.length(); ++i) {
        word_inverse[i] = word[word.length() - i - 1];
    }
    // std::cout << "(inverse = " << word_inverse << ") ";
    if (word == word_inverse) {
        return "palindrome";
    } else {
        return "not a palindrome";
    }
}

int main()
{
    using namespace std::string_literals;

    std::cout << "arara is "s << check_palindrome("arara"s) << "\n";
    std::cout << "banana is "s << check_palindrome("banana"s) << "\n";
}
