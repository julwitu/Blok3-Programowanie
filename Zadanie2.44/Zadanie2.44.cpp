

#include <iostream>

int main()
{
    const int size = 8;
    int tab[size] = {};
    for (int i = 0; i < size; i++) {
          std::cin >> tab[i];
          if (tab[0] == 0) {
              std::cout << "Numer nie moze zaczynac sie od 0";
              break;
          }
          if (tab[i] >= 10) {
              std::cout << "Mozliwe podanie liczb 0-9";
              break;
          }
    }
}

