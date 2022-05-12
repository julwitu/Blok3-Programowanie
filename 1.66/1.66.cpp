
#include <iostream>

int main()
{
    float amount = 123.45f;
    float tablica[15] = { 500.00, 200.00, 100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01 };
    float tablicaWynikow[15] = { 0 };
    for (int i = 0; i < 15; ++i)
    {
        int counter = 0;

        while (amount - tablica[i] >= 0)
        {
            amount = amount - tablica[i];
            counter++;
        }


        tablicaWynikow[i] = counter;
    }
    for (int i = 0; i < 15; ++i)
        std::cout << tablica[i] << " : " << tablicaWynikow[i] << std::endl;
}

