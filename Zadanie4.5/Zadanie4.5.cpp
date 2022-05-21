// Zadanie4.5.*Zad. 4.5
//SprawdŸ czy s³owo rozpoczyna siê z ma³ej litery, nastêpnie mog¹
//wyst¹piæ 3 dowolne znaki, 5 liter¹ jest „w”, nastêpnie dowolny znak i
//wyra¿enie „op”, po spacji podany powinien byæ numer 5 cyfrowy bez
//0 i 1. (napisz funkcjê)
#include <iostream>
bool checkWord(std::string str) {
    if (islower(str.at(0))) {
        if (str.at(5) == 'w') {

        }
        else return 0;

    }else return 0;
}

int main()
{
    std::cout << "Hello World!\n";
}


