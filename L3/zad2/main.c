#include <stdio.h>
#include "conversion.h"

int main(){

        //liczba do przekształcenia
        unsigned int number;

        printf("Konwersja liczby dziesietnej na binarna\n");
        printf("\n");

        printf("Podaj liczbe:");
        scanf("%u", &number); // wczytanie podanej liczby
        printf("\n");

        //wywolanie funkcji do konwersji
        printf("Liczba dziesietna %u w systemie binarnym:\n", number);
        printf("\n");
        decimalToBinary(number);

        return 0;
}