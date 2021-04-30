#include <iostream>
#include <vector>
#include <stdbool.h>
#include <stdio.h>

bool balanced(std::string const& text)
{
    auto parentheses = std::vector<char>{};

    for (auto c: text) {
        switch (c)
        {
        case '(':
            parentheses.push_back('(');
            break;
        case '[':
            parentheses.push_back('[');
            break;
        case '{':
            parentheses.push_back('{');
            break;
        case ')':
            if (parentheses.empty() or parentheses.back() != '(') {
                return false;
            } else {
                parentheses.pop_back();
            }
            break;
        case ']':
            if (parentheses.empty() or parentheses.back() != '[') {
                return false;
            } else {
                parentheses.pop_back();
            }
            break;
        case '}':
            if (parentheses.empty() or parentheses.back() != '{') {
                return false;
            } else {
                parentheses.pop_back();
            }
            break;
        }
    }

    return true;

}

int main()
{
    using namespace std::string_literals;

    auto cases = std::vector<std::string>{
        "int main(int argv, char** argv) { std::cout << argv[0] << '\n'; }"s,
        "([[]]{[]}{()})"s,
        ""s,
        ")"s,
        "([)()(])({}{)(})"s,
        "[[](){](()"s,
    };

    for (auto c: cases) {
        std::cout << "Case " << c << " is "
                  << (balanced(c) ? "balanced" : "not balanced")
                  << '\n';

    }
}