// Zadanie6.1b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main(int argc, char* argv[])
{
	//argc zawsze bedzie miec wartosc >=1 bo jako pierwszy argument podawana jest nazwa programu!!!!!
	std::cout << "You have entered " << argc << " arguments:" << "\n";
	for (int i = 0; i < argc; ++i) std::cout << argv[i] << "\n";
	int sum = 0;
	for (int i = 1; i < argc; ++i) {
		std::cout << argv[i][0]- '0'<<"; ";
		sum += argv[i][0] - '0';
	
	}
	std::cout << sum;
}