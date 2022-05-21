#include "Zad5.1solution.h"
#include <iostream>

void taskA(int num[], int size) {
	std::cout << "A: " << std::endl;

	for(int i = 0; i < size; i++) {
		std::cout << num[i]<< "; ";
	}
}

void taskB(int num[], int size) {
	std::cout << std::endl;
	std::cout << "B: " << std::endl;

	for(int j = size-1; j >= 0; j--) {
		std::cout << num[j]<< "; ";
	}
}

void taskC(int num[], int size) {
	std::cout << std::endl;
	std::cout << "C: " << std::endl;
	for (int k = 0; k < size; k++) {
		if (k%2 != 0) {
			std::cout << num[k] << "; ";
		}
	}
}

void taskD(int num[], int size) {
	std::cout << std::endl;
	std::cout << "D: " << std::endl;
	for (int l = 0; l < size; l+=3) {
		std::cout << num[l] << "; ";
	}
}

int taskE(int num[], int size) {
	std::cout << std::endl;
	std::cout << "E: " << std::endl;
	int sum = 0;
	for (int m = 0; m < size; m++) {
		sum += num[m];
	}
	return sum;
}

void taskF(int num[], int size) {
	std::cout << std::endl;
	std::cout << "F: " << std::endl;
	int sum = 0;

	for (int i = size - 5; i < size; i++) {
		if (num[i] > 3) {
			sum += num[i];
		}
		
	}
	std::cout << sum;
}

void taskG(int num[], int size) {
	std::cout << std::endl;
	std::cout << "G: " << std::endl;
	int counter = 0;
		int sum = 0;

	for (int i = 0; i < size; i++) {
		if (sum <= 10) {
			sum += num[i];
			counter++;
			
		}
		
	}
	std::cout << counter;

}

void taskH(int num[], int size, int n) {
	std::cout << std::endl;
	std::cout << "H: " << std::endl;

	for (int i = 0; i < size; i += n)
	{
		std::cout << num[i] << "; ";
	}
}

void taskI(int num[], int size, int m) {
	std::cout << std::endl;
	std::cout << "I: " << std::endl;
	for (int i = 0; i < size; i++) {
		if (num[i] % m == 0) {
			std::cout << num[i] << "; ";
		}
	}
}

// j) *Które liczby iteruj¹c od pocz¹tku tablicy dadz¹ sumê równ¹ 10? Wypisz te liczby i ich
//indeksy.Czy mo¿liwe s¹ ró¿ne kombinacje ?
void taskJ(int num[], int size) {
	std::cout << std::endl;
	std::cout << "J: " << std::endl;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += num[i];
		if (sum == 10) {
			std::cout << "Indeksy[" << i - 1 << "] i [" << i << "]    Liczby: " << num[i - 1] << " + " << num[i] << std::endl;
			sum = 0;
		}
	}
}