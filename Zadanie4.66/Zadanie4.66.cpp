// Zadanie4.66 Napisz funkcj�, kt�ra zamienia litery w Stringu na ma�e, zwraca
//String.

#include <iostream>
#include <string>

std::string toLowerCase(std::string str) {
    for (int i = 0; i < str.size(); i++) {
        str.at(i) = std::tolower(str.at(i));
   }
    return str;
}

int main()
{
    std::cout << toLowerCase("POSJIA") << std::endl;
    
    std::cout << toLowerCase("PDHDUAHDUADUHAUHDAD OSJIA");

}


