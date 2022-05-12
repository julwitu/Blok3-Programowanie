#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "Podana liczba jest parzysta";
	}
	else {
		std::cout << "Podana liczba jest nieparzysta";
	}
}


