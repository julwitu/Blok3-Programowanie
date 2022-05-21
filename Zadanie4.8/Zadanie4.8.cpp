// Zadanie4.8Napisz funkcj�, kt�ra b�dzie zamienia� ostatni znak z pierwszym w
//Stringu.

#include <iostream>
#include<string>

std::string newString(std::string str) {
    std::swap(str.front(), str.back());
    return str;
}

int main()
{
    std::cout << newString("abbbbbbbbbc") << std::endl;
    std::cout << newString("9bbbbbbbbbafaas")<<std::endl;
}

