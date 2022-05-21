// Zadanie7.11.Stwórz grê kó³ko i krzy¿yk. Wolne pola oznaczaj kropk¹, litera O –
//kó³ko, litera X – krzy¿yk.Gracze okreœlaj¹, gdzie chc¹ postawiæ
//znak wpisuj¹c numery pól(np.„12” – 1 wiersz 2 kolumna).
//Automatycznie naprzemiennie stawiane s¹ kó³ka i krzy¿yki;
//-Gra automatycznie wyszukuje zwyciêski uk³ad, podaje które znaki
//wygra³y oraz podaje ich wspó³rzêdne;
//-Program musi zabroniæ postawienia znaku w polu, które ju¿ jest
//zajête;
//a)* Wersje alternatywne gry dla dowolnych wymiarów nxn(n > 3).

#include <iostream>
char oX[3][3]={{' ', ' ', ' '}, { ' ', ' ', ' ' }, { ' ', ' ', ' ' }};
bool b = false;
void displayOX() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << oX[i][j];
            if (j < 2) {
                std::cout << '|';
            }
        }
            if (i < 2) {
                std::cout << std::endl;
                std::cout << "-----";

            }
            std::cout << std::endl;
        }
    }

void inputAnalyzer() {
    int input;
    do {
        std::cin >> input;
    } while (oX[input / 10 - 1][input % 10 - 1] != ' ');
    //zakladamy ze uzytkownik wprowadza tylko w zakresie 11, 12, 13, 21... 33
    if (b) {
        oX[input / 10-1][input % 10-1] = 'o';
    }
    else {
        oX[input / 10-1][input % 10-1] = 'x';
    }
    b = !b;
}
bool analyzeIsWinner() {

    for (int i = 0; i < 3; i++) {
        if (oX[i][0] == oX[i][1] && oX[i][1] == oX[i][2]&&oX[i][0]!=' ') {
       
            std::cout << "Winner is: " << oX[i][0];
            std::cout << "Coordinates of winning line: ";
            for (int j = 0; j < 3; j++) {
                std::cout << i << "; " << j<< std::endl;
            }
            return true;
        }
        if (oX[0][i] == oX[1][i] && oX[1][i] == oX[2][i] && oX[0][i] != ' ') {
            std::cout << "Winner is: " << oX[0][i];
            std::cout << "Coordinates of winning line: ";
            for (int j = 0; j < 3; j++) {
                std::cout << j << "; " << i << std::endl;
            }
            return true;
        }
        if (oX[0][0] == oX[1][1] && oX[1][1] == oX[2][2] && oX[0][0] != ' ') {
            std::cout << "Winner is: " << oX[1][1];
            std::cout << "Coordinates of winning line: ";
            for (int j = 0; j < 3; j++) {
                std::cout << j << "; " << j << std::endl;
            }
            return true;
        }
        if (oX[0][2] == oX[1][1] && oX[1][1] == oX[2][0] && oX[2][0] != ' ') {
            std::cout << "Winner is: " << oX[1][1];
            std::cout << "Coordinates of winning line: ";
            for (int j = 0; j < 3; j++) {
                std::cout << j << "; " << (2-j) << std::endl;
            }
            return true;
        }
    }
    return false;
}

int main()
{
    bool isWinner = false;
    do {
        inputAnalyzer();
        displayOX();
       isWinner= analyzeIsWinner();
    } while (!isWinner);

}
