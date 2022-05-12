#include <iostream>

int main()
{
	int a = 0;
	std::cout << "Podaj wartosc" << std::endl;
	std::cin >> a;

	if (a > 0) {
		std::cout << "Podana wartosc jest wieksza od 0";
	}
	else if (a < 0) {
		std::cout << "Podana wartosc jest mniejsza od 0";
	}
	else {
		std::cout << "Podana wartosc jest rowna 0";
	}
}

