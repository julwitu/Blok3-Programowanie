// Zadanie4.4.Sprawd� czy s�owo ma wi�cej ni� 5 liter i ko�czy si� liter� �r�. (napisz
//funkcj�)

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

