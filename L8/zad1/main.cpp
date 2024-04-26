#include "iostream"
#include <cstdlib> //dla malloc i free

void stackHeap() {
    int stack1, stack2, stack3, stack4;

    //dynamiczne alokowanie pamięci za pomoca malloc
    int *heap1 = (int*)malloc(sizeof(int));
    int *heap2 = (int*)malloc(sizeof(int));
    int *heap3 = (int*)malloc(sizeof(int));
    int *heap4 = (int*)malloc(sizeof(int));

    //wyswietlanie adresow zmiennych alokowanych na stosie
    //% operator adresu, %p wyswietla adres pamieci w postaci szesnastkowej
    printf("stack1: %p\n", (void*)&stack1);
    printf("stack2: %p\n", (void*)&stack2);
    printf("stack3: %p\n", (void*)&stack3);
    printf("stack4: %p\n", (void*)&stack4);

    printf("\n");

    //wyswietlanie adresow zmiennych alokowanych na stercie, * wskaznik
    printf("heap1: %p\n", (void*)heap1);
    printf("heap2: %p\n", (void*)heap2);
    printf("heap3: %p\n", (void*)heap3);
    printf("heap4: %p\n", (void*)heap4);

    //zwolnienie pamięci alokowanej na stercie
    free(heap1);
    free(heap2);
    free(heap3);
    free(heap4);
}

int main() {
    stackHeap();
    return 0;
}


//przyklad

//stack

//00000089ecbffa7c
//00000089ecbffa78
//00000089ecbffa74
//00000089ecbffa70
//adresy maleją

//heap

//00000256caa21470
//00000256caa21490
//00000256caa214b0
//00000256caa214d0
//adresy rosna

//stos i sterta rosna w przeciwnych kierunkach, wiec nie jest mozliwe ich nalozenie sie
