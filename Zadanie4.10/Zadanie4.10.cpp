// Zadanie4.10 Napisz funkcjê, która bêdzie przyjmowaæ pojedynczy string, oraz
//znak rozdzielaj¹cy.Jej zadaniem bêdzie rozdzielenie otrzymanego
//stringu wzglêdem zadanego znaku oraz wyœwietlenie odpowiedzi na
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
