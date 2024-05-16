#include <stdio.h>
#include <stdlib.h>
#include "median.h"

bool median(const int *tab, unsigned int n, float *buffer) {
    if (tab == NULL || buffer == NULL || n == 0)
        return false;

    // kopia tablicy
    int *copy = (int *)malloc(n * sizeof(int));
    if (copy == NULL)
        return false;

    // kopiowanie zawartosci oryginalnej tablicy
    for (unsigned int i = 0; i < n; i++) {
        copy[i] = tab[i];
    }

    // sortowanie kopii tablicy
    if (copy != NULL) {
        for (unsigned int i = 0; i < n - 1; ++ i)

            for (unsigned int j = 0; j < n - i - 1; ++j)
                if (copy [j] > copy [j + 1]) {
                    int tmp = copy[j];
                    copy[j] = copy[j + 1];
                    copy[j + 1] = tmp;
                }
        }

    // obliczanie mediany, jesli tablica jest parzysta to liczymy srednia z dwoch srodkowych elementow
    if (n % 2 == 0) {
        *buffer = (float) (copy[n / 2 - 1] + copy[n / 2]) / 2;
    } else {
        *buffer = (float) copy[n / 2];
    }

    free(copy);

    return true;
}

void printTab(const int * tab , unsigned int size) {
    if(tab != NULL)
        for(unsigned int i = 0; i < size; ++ i)
            printf("%d ", tab[i]);
    printf("\n");
}