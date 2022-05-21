// Zadanie .7 Napisz metod� power, kt�ra przyjmie dwa parametry typu int, a kt�ra
//zwr�ci wynik pot�gowania o podstawie i wyk�adniku takich, jak
//przekazano.
// 3.2 Dokonaj przeci��enia funkcji power z zad. 3.1 w taki
//spos�b, a�eby obs�ugiwane by�y r�ne typy danych(int,
//   float, double).

#include "Functions.h"
#include <iostream>


int main()
{
	// tu testujemy int power
	// pamietamy zeby prawidlowo i rzetelnie testowac to co napisalismy
   std::cout << power(3, 2) << std::endl;
   std::cout << power(3, -1) << std::endl;
   std::cout << power(3, 0) << std::endl;
   std::cout << power(3, 1) << std::endl;
   std::cout << power(3, 4) << std::endl;
   std::cout << std::endl;
   std::cout << std::endl;


   // tu testujemy float power
   std::cout << power(3.5f, 2.0f) << std::endl;
   std::cout << power(3.5f, -1.0f) << std::endl;
   std::cout << power(3.5f, 0.0f) << std::endl;
   std::cout << power(3.5f, 1.0f) << std::endl;
   std::cout << power(3.5f, 4.0f) << std::endl;

   std::cout << std::endl;
   std::cout << std::endl;

   //double power
   std::cout << power(3.5, 2.0) << std::endl;
   std::cout << power(3.5, -1.0) << std::endl;
   std::cout << power(3.5, 0.0) << std::endl;
   std::cout << power(3.5, 1.0) << std::endl;
   std::cout << power(3.5, 4.0) << std::endl;


}
