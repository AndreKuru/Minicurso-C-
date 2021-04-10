#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    /*
    for (auto i = 0u; i < argc; i++){
        std::cout << "argv[" << i << "] = " << argv[i] << "\n";
    }
    */


    if (argc != 3) {
        std::cout << "invalid number of args (argc != 3)";
    } else {
        int num = atoi(argv[2]);
        std::string(argv[1]);
        if (argv[1] == "n") {
            std::cout << "n = " << num << "\n";
        } else if (argv[1] == "x") {

        } else {
            std::cout << "Unknown argument" << "\n";
        }
    }
    
}
