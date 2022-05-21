// Zadanie4.2 Napisz funkcjê, która bêdzie sk³adaæ tablicê typu char w Stringa
//(wiersz po wierszu)
#include <iostream>
#include <string>
std::string createString1D(char tab[], int a) {
    std::string str;
    for (int i = 0; i < a; i++) {
            str += tab[i];
    }
    return str;
}


std::string createString2D(char tab[][5], int a, int b) { // trzeba zadeklarowac druga wymiar jako wartosc z gory narzucona
    std::string str;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            str += tab[i][j];
        }
        str += '\n';
    }
    return str;

}

std::string newCreateString2D(char tab[][7], int a, int b) { // trzeba zadeklarowac druga wymiar jako wartosc z gory narzucona
    std::string str;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            str += tab[i][j];
        }
        str += '\n';
    }
    return str;

}

int main()
{
  
    char tab[5][5] = {  "abcd" , "efgh", "jsnd" , "umjd" , "uahs"};
    char tab2[4][7] = { "abhdhd" , "efhdha", "jafasd" , "umfasd" };


    char cTab1D[10] = "123456789";

   std::cout << createString1D(cTab1D,10 );
   std::cout << createString2D(tab, 5, 5);
   std::cout << newCreateString2D(tab2, 4, 7);
}


