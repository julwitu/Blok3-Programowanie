// Zadanie1.8.Zaimplementuj funkcj�, kt�ra dla dw�ch niepustych �a�cuch�w tekstowychznajdzie ich najd�u�szy wsp�lny pod�a�cuch. Wypisujemy ten pod�a�cuch orazjego lokalizacj� (indeksy w obu �a�cuchach)
#include <iostream>
#include <string>

int main()
{
    std::string lancuch1 = "djvniiinsaa";
    std::string lancuch2 = "gvnidainw";

    for (int i = 0; i < lancuch1.length(); i++) {
        for (int j = 0; j < lancuch2.length(); j++) {
            if (lancuch1[i] = lancuch2[j]) {
                std::cout << i << " + ";
            }
        }
    }
}

