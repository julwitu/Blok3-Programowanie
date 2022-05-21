// Zadanie4.3 SprawdŸ czy nazwa kraju rozpoczyna siê z wielkiej litery. (napisz
//funkcjê)

#include <iostream>
bool isUpperCase(std::string str) {
    if (str.at(0) >= 65 && str.at(0) <= 90) {
        return 1;
    }
    else return 0;
}

bool isUpperCase2(std::string str) {
    if (isupper(str.at(0))) {
        return 1;
    }
    else return 0;
}

int main()
{
    std::cout<< isUpperCase("Polska") << std::endl;
    std::cout << isUpperCase("polska") << std::endl;
    std::cout << isUpperCase("apdopa") << std::endl;
    std::cout << isUpperCase("Zvhfya") << std::endl;

    std::cout << isUpperCase2("Polska") << std::endl;
    std::cout << isUpperCase2("polska") << std::endl;
    std::cout << isUpperCase2("apdopa") << std::endl;
    std::cout << isUpperCase2("Zvhfya") << std::endl;



}


