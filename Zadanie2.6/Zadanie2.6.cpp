// Zadanie2.6.Napisz funkcjê do wyœwietlania liczby typu double (samodzielnie
// drukuj kolejne cyfry i separator dziesiêtny).

#include <iostream>
#include <math.h>
void printDouble(double d) {
	if (d < 0.0) {
		std::cout << "-";
		d *= -1.0;
	}
	int a = static_cast<int>(d);
	double b = d - a; // czesc liczby ktora znajduje sie po przecinku
	int n1 = 1; // licznik cyfr w liczbie

	while (a > 9) { // zliczamy ile jest w czesci calkowitej, robimy to bo nie jestesmy w stanie ich wyswietlic od lewej do prawej
		a /= 10;
		n1++;
	}

	 a = static_cast<int>(d); // przywrocenie pierwotnej wartosci
	for (int i = 0; i < n1; i++) {
		//tutaj wyciagamy kolejne cyfry z czesci calkowitej od lewej do prawej
		// przyklad 123
		// 123/100 -> 1
		// 23/10 -> 2
		// 3/1 -> 3
		int p = static_cast<int>(pow(10, n1 - i - 1));
		int c = a / p; // rzutujemy bo pow zwaraca double
		a -= c * p;

		std::cout << c;
	}

	std::cout << " . ";

	do {
		b *= 10;
		int c = static_cast<int>(b);
		std::cout << c;
		b -= c;
	} while (b > 0.0);


}

int main()
{
	printDouble(123.45); // wyswietli wiecej cyfr po przecinku bo jest niedokladny
	std::cout << std::endl;
	 printDouble(1.404);

}
