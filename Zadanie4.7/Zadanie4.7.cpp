// Zadanie4.7 Napisz funkcj�, kt�ra b�dzie zamienia� znaki od 3 do 6 w Stringu na
//�abcd�.

#include <iostream>
#include <string> 
std::string changeString(std::string str) {
    std::string str2 = "abcd";
    str.replace(2, 5, str2);
    return str;
}

int main()
{
    std::cout << changeString("hellohello");
}


