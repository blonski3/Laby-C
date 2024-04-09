#include "tabUtils.h"
#include <cstdlib>  // rand
#include <ctime>    // time
#include <iostream>

int main () {

    const unsigned int arraySize = 12; //rozmiar tablicy

    int tab[arraySize];

    srand(time(NULL)); //generacja liczb pseudolosowych


    //inicjalizacja tablicy losowymy wartosciami
    for (unsigned int i = 0; i < arraySize; ++i) {
        tab[i] = rand() % 100; //losujemy liczby [0-99]
    }

    //wyswietlenie tablicy przed odwroceniem
    std::cout << "tablica: " << std::endl;
    printTab(tab, arraySize);

    //odwrocenie elementow tablicy
    reverseTab(tab, arraySize);

    //wyswietlenie odwroconej tablicy
    std::cout << "odwrocona tablica: " << std::endl;
    printTab(tab, arraySize);

    return 0;
}
