// Zadanie7.3 Napisz funkcję do sprawdzania czy liczba jest pierwszą.
// Liczba pierwsza – liczba, która ma tylko dwa dzielniki (1 i siebie);
// Wystarcza sprawdzać dzielniki z przedziału : [2…√𝑛]

#include <iostream>
#include <cmath>
bool isPrimeNumber(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }

    }
    return true;
}

int main()
{
    std::cout << isPrimeNumber(6) << std::endl;
    std::cout << isPrimeNumber(1) << std::endl;
    std::cout << isPrimeNumber(0) << std::endl;
    std::cout << isPrimeNumber(10) << std::endl;
    std::cout << isPrimeNumber(2) << std::endl;
    std::cout << isPrimeNumber(25) << std::endl;
    std::cout << isPrimeNumber(3) << std::endl;





}

