// Zadanie5.5.cpp Stw�rz funkcje, kt�re narysuj� podane poni�ej figury. Wej�ciem jest
//wielko��

#include <iostream>

void drawFigureA(int l) {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < i; j++) { // liczba wykonan petli zagniezdzonej jest zalezna od aktualnej wartosci "i"
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}


void drawFigureB(int l) {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j <= i; j++) {
			
			if (j == i) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
}
void drawFigureC(int l) {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++) {
			if (j > 0 && j < l - 1 && i > 0 && i < l - 1) {
				std::cout << " ";
			}
			else {
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}
}

void drawFigureD(int l) {

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++) {

			if (j == i || j==l-i-1) {
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
	drawFigureA(6);
	std::cout << std::endl << std::endl;
	//drawFigureB(6);
	//std::cout << std::endl << std::endl;
	//drawFigureC(6);
	//std::cout << std::endl << std::endl;
	//drawFigureD(6);

}
