// Zadanie5.10. Zad. 5.10
//Napisz funkcjê, która dodaje dwie macierze(takiej samej wielkoœci), nic
//nie zwraca, a wynik pokazuje na ekranie.
// a11 a12
// a21 a22 
// b11 b12
// b21 b22
// a11+b11 a12+b12

#include <iostream>
void printMatrix(int m[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << m[i][j] << "; ";
        }
        std::cout << std::endl;
    }
}

void sumMatrix2x2(int m1[][2], int m2[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            m1[i][j] += m2[i][j];
            std::cout << "Index tablicy[" << i << "][" << j << "]:   " << m1[i][j] << std::endl;
        }
    }
}
void sumMatrix5x5(int m1[][5], int m2[][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            m1[i][j] += m2[i][j];
            std::cout << "Index tablicy[" << i << "][" << j << "]:   " << m1[i][j] << std::endl;
        }
    }
}


int main()
{
    int m1[2][2] = { { 1, 2 }, { 3, 4 } };
    int m2[2][2] = { {4, 5}, {6, 7} };


    std::cout << "Macierz wejsciowa m1: "<<std::endl;
    printMatrix(m1);

    std::cout << "Macierz wejsciowa m2: " << std::endl;
    printMatrix(m2);

    std::cout << std::endl;
    std::cout << "Suma dwoch macierzy: " << std::endl;
    sumMatrix2x2(m1, m2);
    std::cout << std::endl;

    //int m3[5][5] = { { 1, 2,2,4,5 }, { 3, 4,7,5,4 }, {6, 7,1,4,8},{3,1,2,4,7 }, {5, 9,8,4,2} };
    //int m4[5][5] = { {4, 5,2,4,7}, {6, 7,6,9,3}, {3,5,1,5,4}, {4,9,7,2,6}, {1,1,4,4,8} };
    //sumMatrix5x5(m3, m4);

}

