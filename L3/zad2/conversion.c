#include <stdio.h>
#include "conversion.h"


void decimalToBinary(unsigned int number) {

    unsigned int binary[32]
    int binary = 0;
    int power = 1;
}

while(number > 0) {
    unsigned int bit = number % 2;
    binary += bit * power;
    power *= 10;
    number /= 2;
    }
