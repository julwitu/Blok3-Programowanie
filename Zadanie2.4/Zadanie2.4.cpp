// Zadanie2.4.SprawdŸ czy podany numer telefonu u¿ytkownika jest prawid³owy 
//(musi zawieraæ 8 cyfr i nie mo¿e zaczynaæ siê na 0).

// NAPISZ TO ZADANIE UZYWAJAC TABLICY
#include <iostream>

 void checkNumber(unsigned int number) {
	if (number > 10000000 && number < 100000000)
		std::cout << "OK";
	else {
		std::cout << "Podaj poprawny numer";
	}
}

int main()
{
	int number = 0;
	std::cin >> number;

	checkNumber(number);
		std::cout<< std::endl;
	std::cin >> number;

	checkNumber(number);
	std::cout << std::endl;

	std::cin >> number;
	checkNumber(number);
	std::cout << std::endl;





}

