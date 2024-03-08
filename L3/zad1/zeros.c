#include <stdio.h>
#include <math.h>
#include "zeros.h"


void zeros(float a, float b, float c) {
    float delta = b * b - 4 * a * c;    // definicja delty
    float x0, x1, x2;

    // sprawdzanie delty
    if(delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Miejsca zerowe funkcji:\n");
        printf("x1 = %.3f\n", x1);
        printf("x2 = %.3f\n", x2);
    }

    // jedno miejsce zerowe
    else if(delta == 0) {
        x0 = -b / (2 * a);
        printf("Miejsce zerowe funkcji:\n");
        printf("x0 = %.3f\n", x0);
    }

    // brak miejsc zerowych
    else {
        printf("Brak miejsc zerowych.\n");
    }
}