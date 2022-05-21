// Zadanie5.99.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <math.h>

void revertCharArrayv2(char tab[][3])
{
    int rM = ceil(3 / 2.0);
    for (int i = 0; i < ceil(3/2.0); ++i)
    {
        if (i == rM-1) {
            for (int j = 0; j < rM; ++j)
            {
                std::swap(tab[i][j], tab[3 - i - 1][3 - j - 1]);
            }

        }
        else {
            for (int j = 0; j < 3; ++j)
            {
                std::swap(tab[i][j], tab[3 - i - 1][3 - j - 1]);
            }
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << tab[i][j];
        }
        std::cout << std::endl;
    }

}


int main()
{
    const int size = 3;
    char tab[size][size] =
    { {'a', 'b', 'c'},
      {'d', 'e', 'f'},
      {'*', '#', '$'} };

   
    revertCharArrayv2(tab);

}