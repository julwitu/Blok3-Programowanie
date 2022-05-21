// Zadanie7.4.  ZnajdŸ n liczb pierwszych. (napisz funkcjê)

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
    int n = 27;
    int l = 0; // ta zmienna przechowuje kolejne wartosci sprawdzanych liczb naturalnych
    for (int i = 0; i < n;) { // ta petla bedzie dzialac az znajdzie n liczb pierwszych
        if (isPrimeNumber(l)) {
            i++;
            std::cout << l << std::endl;
        }
        l++;
    }
}

