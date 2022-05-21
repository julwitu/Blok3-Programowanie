#include "Functions.h"
// Zadanie3.3.Zrealizuj wielokrotne przeci¹¿enie funkcji multiply, w taki
//sposób, a¿eby umo¿liwia³a przyjmowanie 2, 3, 4
//argumentów.

double multiply(double a, double b) {
	return a * b;
}

double multiply(double a, double b, double c) {
	return a * b * c;
}
double multiply(double a, double b, double c, double d) {
	return a * b * c * d;
}

/// napisz program ktory bedzie losowal liczbt z pewnego zakresu i tworzyl z niego tekst