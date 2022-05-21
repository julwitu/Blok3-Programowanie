// Zadanie5.7. Napisz funkcjê, która przyjmie od u¿ytkownika szerokoœæ i wysokoœæ, a
//nastêpnie narysuje szachownice o podanych wymiarach.Pola musz¹
//mieæ naprzemiennie ró¿ne kolory, wykorzystaj w tym celu ró¿ne
//symbole(np.o i #).Wymiar pola powinien wynosiæ minimum 2x2 znaki.
//Standardowa szachownica posiada 8x8 pól.



#include <iostream>
void drawBoardA(int a=8) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if ((i+j)%2 ==0) {
                std::cout << "#";
            }
            else {
                std::cout << "o";
            }
        }
       std::cout<< std::endl;
    }
}

void drawBoardB(int a = 8) {
    for (int i = 0; i < a; i++) { // rysowanie pol w pionie
        for (int m = 0; m < 2; m++) { // podwajanie wierszy, dzieki temu nasze pole zajmuje 2 miejsca w pionie
            for (int j = 0; j < a; j++) { // rysowanie pol w poziomie
                for (int k = 0; k < 2; k++) { // podwajanie znakow
                    if ((i + j) % 2 == 0) { // warunek zostaje taki sam, ale teraz analizuje pozycje pola a nie konktetnego znaku
                        std::cout << "#";
                    }
                    else {
                        std::cout << "o";
                    }

                }
            }
            std::cout << std::endl;
        }
        
    }

}

int main()
{
    //drawBoardA(8);
    std::cout << std::endl;
    drawBoardB();
}

