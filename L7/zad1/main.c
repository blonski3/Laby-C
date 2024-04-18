#include <stdio.h>

int main() {

    FILE *file; //wskaznik do pliku
    char input[20];
    int count = 0; //ilosc znakow
    char x; //zmienna przechowywuje wpisanny znak

    file = fopen("input.txt", "w");

    printf("wpisz cos, q/Q aby zakonczyc \n");

    //petla konczy sie gdy wprowadzimy q albo Q, lub jesli przekroczymy 20 znakow
    while (count < 20) {

        x = getchar();

        if (x == 'q' || x == 'Q') { //operator lub ||
            break;
        }

        if (x == '\n') { //kontynuj do nastepnej linijki
            continue;
        }

        input[count++] = x; //zapisanie znaku do tablicy i inkrementacja
    }

    input[count] = '\0'; //dodanie konca znakow
    fputs(input, file); //zapisanie pliku
    fclose(file); //zamkniecie pliku

    printf("znaki zostaly zapisane w pliku tekstowym");

    return 0;
}
