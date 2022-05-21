// Zadanie6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main(int argc, char* argv[])
 {
	std::cout << "You have entered " << argc << " arguments:" << "\n";
	 for (int i = 0; i < argc; ++i) std::cout << argv[i] << "\n";
	
}
