// Zadanie4.5.*Zad. 4.5
//Sprawd� czy s�owo rozpoczyna si� z ma�ej litery, nast�pnie mog�
//wyst�pi� 3 dowolne znaki, 5 liter� jest �w�, nast�pnie dowolny znak i
//wyra�enie �op�, po spacji podany powinien by� numer 5 cyfrowy bez
//0 i 1. (napisz funkcj�)
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


