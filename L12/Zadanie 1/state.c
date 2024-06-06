#include <stdio.h>
#include "state.h"

//wypisuje znak na standardowe wyjscie
void echo(char c) {
    putchar(c);
}

//zapisuje znaki do pliku output.txt
void write(char c) {
    FILE *file = fopen("output.txt", "a"); //otwiera plik output.txt
    if (file != NULL) {
        fputc(c, file); //zapisuje znak do pliku
        fclose(file); //zamykane pliku po zapisie
    } else {
        printf("error\n");
    }
}