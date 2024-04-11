#include "tabUtils.h"
#include <iostream>


//printTab wyswietla tablice na standardowym wyjsciu
void printTab(const int * const tab, unsigned int size) {

    for (unsigned int i = 0; i < size; i++) {

        std::cout << tab[i] << " "; //wyswietla aktualny element tablicy
    }

    std::cout << std::endl; //przejscie do nowej linii po wyswietleniu calej tablicy
}


//reverseTab odwraca kolejnosc elementow tablicy
void reverseTab(int * const tab, unsigned int size) {

    for (unsigned int i = 0; i < size / 2; i++) {
        int temp = tab[i]; //zmienna przechowujaca aktualny element tablicy
        tab [i] = tab[size - 1 - i]; //zamiana elementow symetrycznych wzg srodka tablicy, size - 1 to ostatni element tablicy
        tab [size - 1 -i] = temp; //przywraca wartosc zmiennej do drugiego elementu symetrycznego
    }
}