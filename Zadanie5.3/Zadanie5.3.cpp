// Zadanie5.3.Napisz funkcjê, która zamienia wiersze z kolumnami danej tablicy
//(transponuje)i wypisuje tak transponowan¹ nowoutworzon¹ tablicê.
// 1 2 3
// 3 4 5
// 7 8 9
// ->
//1 4 7
//2 5 8
//3 6 9
#include <iostream>
void transpose3x3Array(int tab[][3])
{
    int res[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            res[i][j] = tab[j][i];
            std::cout << res[i][j] << "; ";
        }
        std::cout << '\n';
    }

}


int main(){

     const int size = 3;
     int tab[size][size] = { {1,2, 3}, {4,5, 6}, {7, 8, 9} };

     transpose3x3Array(tab);

     
}

