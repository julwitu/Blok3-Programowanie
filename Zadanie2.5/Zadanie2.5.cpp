// Zadanie2.5.Napisz program do zaokr¹glania liczb zmiennoprzecinkowych, 
//parametrem n jest liczba cyfr po przecinku
#include <iostream>
#include <math.h>
#include<iomanip>
double roundNumbers(double number, int n) {
    return (round(number * n))/n;
}

int main()
{
    //std::cout << round(25.244)<< std::endl;
    //std::cout << round(25.294) << std::endl;
    //std::cout << round(25.697) << std::endl;

    std::cout << "_______________________________________" << std::endl;
    std::cout << roundNumbers(25.244, 10) << std::endl;
    std::cout << roundNumbers(25.244, 1) << std::endl;
    std::cout << std::setprecision(10) << roundNumbers(25.2444546, 1000000) << std::endl;
  






}
