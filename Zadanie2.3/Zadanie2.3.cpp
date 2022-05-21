// Utwórz funkcjê dodawania przyjmuj¹c¹ jako argument short int, oraz
//zwracaj¹c¹ short int, int, long long int, double.Przetestuj jej dzia³anie
//podaj¹c ró¿ne typy parametrów.Jak zachowuje siê kompilator ? Jak
//wygl¹da kwestia rzutowania ?

#include <iostream>

short int addShort(short int number) {
    return number + number;
}

 int addInt(int number) {
    return number + number;
}

 long long int addLong(long long int number) {
     return number + number;
 }

 double addDouble(double number) {
     return number + number;
 }

int main()
{
    std::cout<<addShort(5)<< std::endl;
    std::cout << addShort(5265959592)<< std::endl; // obliczenie niepoprawane bo liczba nie jest z zakresu shorta
    std::cout << addShort(5.0)<< std::endl;

    std::cout << addInt(151) << std::endl;
    std::cout << addInt(29595989898989) << std::endl; // niepoprawne bo liczba nie jest z zakresu 
    std::cout << addInt(2825.1) << std::endl; // wynik 5650 traktuje jako int? ale ucina co jest na koncu nie zaokragla
    std::cout << addInt(2825.9) << std::endl; // taki sam wynik bo jw
    std::cout << addInt(2825.9f) << std::endl; // tu taki sam wynik jw, nie zachowuje sie tak jak w longu DLACZEGO?

    std::cout << addLong(15) << std::endl;
    std::cout << addLong(15186684488466) << std::endl;
    std::cout << addLong(221514755) << std::endl;
    std::cout << addLong(221514755.225f) << std::endl; // jezeli nie dodaje f na koncu to dzieje sie to samo co z int tu wynik 443029504 zamiast poprawnego 443029510.45 DLACZEGO?


    std::cout << addDouble(24.55f) << std::endl; // prawidlowy wynik prawidlowa konwersja
    std::cout << addDouble(2588.4445) << std::endl;
    std::cout << addDouble(151515151515) << std::endl; //3.0303e+11 DLACZEGO?


}

