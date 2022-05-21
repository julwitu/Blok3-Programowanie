// Zadanie1.8.Zaimplementuj funkcjê, która dla dwóch niepustych ³añcuchów tekstowychznajdzie ich najd³u¿szy wspólny pod³añcuch. Wypisujemy ten pod³añcuch orazjego lokalizacjê (indeksy w obu ³añcuchach)
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

