// Zadanie4.4.SprawdŸ czy s³owo ma wiêcej ni¿ 5 liter i koñczy siê liter¹ „r”. (napisz
//funkcjê)

#include <iostream>
bool checkWord(std::string str) {
    if ((str.length() + 1) > 6) {
        if (str.back() == 'r') {
            return 1 ;
        }

        else return 0;
    }
    else return 0;
}

int main()
{
    std::cout << checkWord("blablabla");
    std::cout << checkWord("blabr");
    std::cout << checkWord("bla");

    std::cout << checkWord("blablablr");
    std::cout << checkWord("blabsr");
    std::cout << checkWord("blr");
}

