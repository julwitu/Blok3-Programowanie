// Zadanie5.6.cpp 
// Stw�rz funkcje, kt�re narysuj� podane poni�ej figury. Wej�ciem jest
//wysoko�� i szeroko��.Niech funkcja przyjmuje r�wnie� zmienn�,
//kt�ra b�dzie okre�la� rysowany znak.
//**Dla poprzedniego programu nale�y rozwi�za� nast�puj�cy problem (stw�rz
//odpowiedni� metod� zwracaj�c� wsp�rz�dne przek�tnej(x; y) dla szeroko�ci(n) i
//wysoko�ci(m) prostok�ta: f(x)-> y = (m/n)*x
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
