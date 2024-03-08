#include <stdio.h>
#include "zeros.h"

int main(){

    printf("wolfreealpha.com\n");
    printf("\n");
    printf("Funkcja ax^2+bx+c\n");
    printf("\n");

    float a, b, c;

    printf("Wspolczynnik a:");
    scanf("%f", &a);

    printf("Wspolczynnik b:");
    scanf("%f", &b);

    printf("Wspolczynnik c:");
    scanf("%f", &c);

    printf("\n");

    zeros(a, b, c);

    return 0;
}
