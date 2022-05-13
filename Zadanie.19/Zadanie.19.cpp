// U¿ywaj¹c pêtli while losuj liczby, a¿ do uzyskania liczby mniejszej ni¿ 0.03.  Wszystkie liczby wyœwietlaj. Wyœwietl liczbê losowañ.

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

