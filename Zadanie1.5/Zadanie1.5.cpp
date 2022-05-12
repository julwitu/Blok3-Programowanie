#include <iostream>
#include <string>

bool czyJestPalindrom(std::string str) {
	int strLength = str.size(); //zwrocenie dlugosci
	for (int i = 0; i < strLength/2; i++) {
		//if (str[i] == str[strLength-i-1]) 
		 if (str.at(i) != str.at(strLength-i-1)) // - metoda at
		{
			return 0;
			
		}
	
	}
	return 1;
}

int main()
{
	std::string word = "";
	std::cin >> word;

	std::cout<< czyJestPalindrom(word);

}

