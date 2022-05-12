#include <iostream>

int main()
{
    int a = 5;
    int b = 9;
    int c = 27;
    int max = 0;

    if (a > b && a>c){
        std::cout << a;
    }
    else if (b > a && b > c) {
        std::cout << b;
    }else if (c > a && c > b) {
        std::cout << c;
    }
}

