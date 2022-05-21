#include "Functions.h"
#include <math.h>
// uproszczona funckcja do potegowania liczb naturalnych 
int power(int a, int b) {
	if (b < 0) { // nie obslugujemy gdy jest potega jest liczba ujemna
		return -1;
	}
	if (b == 0) {
		return 1;
	}
	if (b == 1) {
		return a;
	}

	int r = 1;
	for (int i = 0; i < b; i++) {
		r*= a;
	}
	return r;
}

// funkcja do potegowania z math.h nazywa sie pow
// nasza funckja nazywa sie power i to sa inne funkcje
//przeciazamt funkcje power, odbywa sie to w taki sposob ze mamy taka sama nazwe funkcji ale inne argumenty/typ zwracany
float power(float a, float b) {
	return static_cast<float>(pow(a, b)); // rzutowanie stratne robimy jawnie
}

double power(double a, double b) {
	return pow(a, b);
}