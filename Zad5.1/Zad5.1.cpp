// Zad5.1.cpp : 
#include "Zad5.1solution.h"
#include <iostream>


int main()
{
    const int n = 20;
    int num[n];

    for (int i = 0; i < n; i++) {
        num[i] = rand() % 10 + 1;
    }

    taskA(num, n);
    taskB(num, n);
    taskC(num, n);
    taskD(num, n);
    std::cout << taskE(num, n);
    taskF(num, n);
    taskG(num, n);
    taskH(num, n, 5);
    taskI(num, n, 3);
    taskJ(num, n);

        
}

