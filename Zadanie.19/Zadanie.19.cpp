// U�ywaj�c p�tli while losuj liczby, a� do uzyskania liczby mniejszej ni� 0.03.  Wszystkie liczby wy�wietlaj. Wy�wietl liczb� losowa�.

#include <iostream>
#include <time.h>

int main()
{
	srand(time(NULL));
	double number = 0.00;
	int counter = 0;
	do {
		number = rand()/ static_cast < double>(10000); //funkcja srand zmienia ziarno losowania
		std::cout << number << std::endl;
		counter++;
	} while (number >= 0.03);
	std::cout << "Liczba losowan: " << counter << std::endl;
}

