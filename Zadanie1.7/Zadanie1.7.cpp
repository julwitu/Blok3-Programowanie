// Zadanie1.7 Zaimplementuj funkcjê, która znajdzie w ³añcuchu znaków wszystkie
//wyst¹pienia wzorca.Niech funkcja wyswietla adresy tych wystapien na
//ekranie.
#include <iostream>
void indexOf(char tab[], char znak) {
    for (int i = 0; i < 10; i++) {
        if (tab[i] == znak) {
            std::cout << "Index: " << i << std::endl;
        }
    }
}

int main()
{
    char tab[10] = { 'a', 'b' ,'v', 'a', 'a', 'f', 'a', 'd', 'v', 'v' };
    indexOf(tab, 'a');
    std::cout << "_______________________________________" << std::endl;
    indexOf(tab, 'v');

}

