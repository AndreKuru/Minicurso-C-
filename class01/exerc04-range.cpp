#include <iostream>
#include <string>

std::string check_palindrome (std::string word){
    std::string word_inverse = "";

    for (auto i : word) {
        word_inverse = i + word_inverse;
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
