// Zadanie5.6.cpp 
// Stwórz funkcje, które narysuj¹ podane poni¿ej figury. Wejœciem jest
//wysokoœæ i szerokoœæ.Niech funkcja przyjmuje równie¿ zmienn¹,
//która bêdzie okreœlaæ rysowany znak.
//**Dla poprzedniego programu nale¿y rozwi¹zaæ nastêpuj¹cy problem (stwórz
//odpowiedni¹ metodê zwracaj¹c¹ wspó³rzêdne przek¹tnej(x; y) dla szerokoœci(n) i
//wysokoœci(m) prostok¹ta: f(x)-> y = (m/n)*x
// TO JEST PRZECWICZENIE ZADANIA 5.6 bez *

#include <iostream>
void drawA(int n) {
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <=i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void drawB(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void drawC(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void drawD(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || j == n - i - 1) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    drawA(5);
    drawB(5);
    drawC(5);
    drawD(5);
}
