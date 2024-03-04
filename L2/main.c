#include <stdio.h>
#include "defs.h"

int main(){
    //Zad 1
    printf("Jakub Blonski\n");

    //Zad 2, wynik dodawania
    float result = add(x,y);
    printf("Addition result: %f\n", result);

    //Zad 3, rozmiary podane w bajtach, 1B=8b
    printf("sizeOfFloat: %lx\n", sizeof(float));
    printf("sizeOfInt: %lx\n", sizeof(int));
    printf("sizeOfDouble: %lx\n", sizeof(double));
    printf("sizeOfVoid: %lx\n", sizeof(void));
    return 0;
}
