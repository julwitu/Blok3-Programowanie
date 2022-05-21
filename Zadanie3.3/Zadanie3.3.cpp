// Zadanie3.3.Zrealizuj wielokrotne przeci¹¿enie funkcji multiply, w taki
//sposób, a¿eby umo¿liwia³a przyjmowanie 2, 3, 4
//argumentów.
#include "Functions.h"
#include <iostream>


int main()
{
    std::cout << multiply(2.3, 4.5) << std::endl;
    std::cout << multiply(3.0, 4.0) << std::endl;
    std::cout << multiply(2.355, 4.555) << std::endl;

    std::cout << std::endl<< std::endl;

    std::cout << multiply(2.3, 4.5, 5.1) << std::endl;
    std::cout << multiply(3.0, 4.0, 5.0) << std::endl;
    std::cout << multiply(2.355, 4.555, 5.154) << std::endl;

    std::cout << std::endl << std::endl;

    std::cout << multiply(2.3, 4.5, 5.1, 8.1) << std::endl;
    std::cout << multiply(3.0, 4.0, 5.0, 6.0) << std::endl;
    std::cout << multiply(2.355, 4.555, 5.154, 4.555) << std::endl;








}

