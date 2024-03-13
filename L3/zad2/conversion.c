#include <stdio.h>
#include "conversion.h"


void decimalToBinary(unsigned int number) {

    unsigned int binary = 0; // zmienna do przechowania reprezentacji binarnej
    unsigned int power = 1; // zmienna pomocniczna do potegi 2

    unsigned int originalNumber = number; // zachowanie podanej liczby

    while (number > 0) {
        binary += (number % 2) * power; // reszta z dzielenia przed 2
        power *= 10; // przesuwamy sie do kolejnego bitu w binarnym
        number /= 2; // dzielimy liczbe przed 2 by przejsc do kolejnego bitu
    }

    printf("%u = %u\n", originalNumber, binary); // wynik w formacie "liczba dziesietna = binarna"
}