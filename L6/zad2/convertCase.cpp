#include "convertCase.h"

void convertCase(char text[]) {

    // iterujemy przez tablice do konca znakow
    for (int i = 0; text[i] != '\0'; ++i) {

        // zmiana znakow od a do z, && - operator logiczny AND
        if (text[i] >= 'a' && text[i] <= 'z') {

            text[i] = text[i] - 'a' + 'A'; // zamiana malej na duza
        }

        else if (text[i] >= 'A' && text[i] <= 'Z') {

            text[i] = text[i] - 'A' + 'a'; // zamiana duzej na mala
        }
    }
}
