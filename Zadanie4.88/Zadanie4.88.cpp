// Zadanie4.88.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

std::string swapFirstWithLastChar2(std::string str)
{
    char c = str.back(); //zapamietujemy na chwile ostatni znak zanim go nadpiszemy
    str.back() = str.front();
    str.front() = c;
    return str;
}
int main()
{
   
    std::cout << swapFirstWithLastChar2("Hello World!\n");
}