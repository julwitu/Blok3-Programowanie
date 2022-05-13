#include<time.h>
#include <iostream>

int randomNumber() {
    
    int number = rand() % 10+1;
    return number;
}

int main()
{
    srand(time(NULL));

    int a = randomNumber();
    int b = randomNumber();
    int c = randomNumber();

    std::cout << a << " / " << b << " / " << c << std::endl;
}

