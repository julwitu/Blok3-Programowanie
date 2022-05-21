// Zadanie4.10 Napisz funkcj�, kt�ra b�dzie przyjmowa� pojedynczy string, oraz
//znak rozdzielaj�cy.Jej zadaniem b�dzie rozdzielenie otrzymanego
//stringu wzgl�dem zadanego znaku oraz wy�wietlenie odpowiedzi na
//ekranie.

#include <iostream>
#include <string>


std::string divideString(std::string str, char c) {
    std::string newString = "";
    for (int i = 0; i < str.size(); i++) {
        newString += str[i] + c;
    }
    return newString;
}

int main()
{
    char c = '+';
    std::cout << divideString("Hello", c);
}
