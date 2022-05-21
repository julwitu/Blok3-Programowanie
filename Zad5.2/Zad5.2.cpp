// Zad5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    const int size = 10;
    double tab[size][size];
    double n = 1.0;
    //for (int i = 0; i < size; i++) {
    //    for (int j = 0; j < size; j++) {
    //        tab[i][j] = n;
    //        n++;
    //    }
    //}

    //for (int k = 0; k < size; k++) {
    //    for (int l = 0; l < size; l++) {
    //        std::cout << tab[k][l] << "; ";
    //    }
    //}
    // 
    // 
    //double tab2[size][size];
    //for (int i = 0; i < size; i++) {
    //    for (int j = 0; j < size; j++) {
    //        tab2[i][j] = rand();
    //    }
    //}
    //for (int i = 0; i < size; i++) {
    //    for (int j = 0; j < size; j++) {
    //        std::cout << tab2[i][j] << "; ";
    //    }
    //}

    //PODPUNKT C
//    double tab3[size][size];
//   
// for (int i = 0; i < size; i++) {
//     for (int j = 0; j < size; j++) {
//         tab3[i][j] = rand()%6-1.5;
//     }
// }
// for (int i = 0; i < size; i++) {
//     for (int j = 0; j < size; j++) {
//         std::cout << tab3[i][j] << "; ";
//     }
// }
//

    //PODPUNKT D
    double tab4[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            tab4[i][j] = static_cast<double>((i+j)/100);
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << tab4[i][j] << "; ";
        }
    }
}

