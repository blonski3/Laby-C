#include <stdio.h>
#include "conversion.h"


void decimalToBinary(unsigned int number) {

    // zmienna do przechowania reprezentacji binarnej
    unsigned int binary = 0;
    // zmienna pomocniczna do potegi 2
    unsigned int power = 1;

    // zachowanie podanej liczby
    unsigned int originalNumber = number;

    while (number > 0) {
        binary += (number % 2) * power; // reszta z dzielenia przed 2
        power *= 10; // przesuwamy sie do kolejnego bitu w binarnym
        number /= 2; // dzielimy liczbe przed 2 by przejsc do kolejnego bitu
    }

    printf("%u = %u\n", originalNumber, binary); // wynik w formacie "liczba dziesietna = binarna"
}