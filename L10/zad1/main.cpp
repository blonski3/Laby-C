#include <stdio.h>
#include "median.h"

int main() {
    int array[] = {7, 3, 2, 7, 9, 0, 3, 4, 1};
    unsigned int size = sizeof(array) / sizeof(array[0]);
    float result;

    printf("liczby:\n");
    printTab(array, size);
    printf("\n");

    if (median(array, size, &result)) {
        printf("mediana:\n%.2f", result);
    } else {
        printf("nie da rady");
    }

    return 0;
}
