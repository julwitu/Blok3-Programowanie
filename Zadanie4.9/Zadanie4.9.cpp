// Zadanie4.9.Napisz funkcj�, kt�ra b�dzie przyjmowa� tablic� string�w, oraz
//zwraca� pojedynczy string(po scaleniu).Niech dodatkowym
//argumentem b�dzie znak umieszczany pomi�dzy ��czonymi
//stringami.

#include <iostream>
std::string concatenateStrings(std::string tab[], int a, char c) {
    std::string newString = "";
    for (int i = 0; i < a; i++) {
        newString += tab[i] + c;
    }

    return newString;
}

int main()
{
    std::string tab[3] = { "Kurs", "CPP", "SDA"};
    std::cout << concatenateStrings(tab, 3, '\n');
}
