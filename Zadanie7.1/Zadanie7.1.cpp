// Zadanie7.1. Napisz funkcjê do obliczania najmniejszej wspólnej wielokrotnoœci.
// NWD - najwiekszy wspolny dzielnik
#include <iostream>

int nWD(int a, int b) {
 

    if (a == b) {
        return a; // jezeli liczby sa rowna to ktorakolwiek z nich jest najwiekszym wspolnym dzielnikiem
    }
    if (a % b == 0) {
        return b;
    }
    if (b % a == 0) {
        return a;
    }

    int nwd = 1;
    if (a > b) {
        for (int i = 2; i <= b / 2; i++) {
            if ((a % i == 0)&&(b%i==0)) {
                nwd = i;
            }
        }
    }
    else {
        for (int i = 2; i <= a / 2; i++) {
            if ((a % i == 0) && (b % i == 0)) {
                nwd = i;
            }
        }

    }
    return nwd;
}

int nWW(int a, int b) {
    int result = (a * b) / nWD(a, b);
    return result;
}

int main()
{
    std::cout<< nWD(56, 36)<<std::endl;
    std::cout << nWW(56, 36) << std::endl;
}
