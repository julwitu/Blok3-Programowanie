// Zadanie5.9.Napisz funkcjê, która dla tablic dwuwymiarowych typu char, bêdzie
//odwracaæ ich kolejnoœæ(element[0, 0] zamienia siê z elementem
//    ostatnim, element[0, 1] zamienia siê z przedostatnim itd.)
//

#include <iostream>
void reverseArray(char c[][6]) {
    const int l = 6;
 
    char d[3][l];
    for (int i = 0; i < 3; i++) {
        for (int j =0; j<=l-1; j++) {
            d[i][j] = c[i][l - 1 - j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < l; j++) {
            std::cout << "Index tablicy[" << i << "][" << j << "]:   " << d[i][j] << std::endl;
        }
    }
}

int main()
{
    char s[3][6] = { {'c', 'r', 'o', 'p', 'a','w'}, {'r','f', 'r','d', 'o', 'p'}, {'x','p', 'a','w', 'f', 'r'} };
    std::cout << "Wypisanie tablicy poczatkowej: " << std::endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            std::cout << s[i][j] << "; ";
        }
        std::cout << std::endl;
    }

    reverseArray(s);

}

