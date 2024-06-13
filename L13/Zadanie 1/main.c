#include <stdio.h>
#include "math_utils.h"


int main() {
    int x, y;

    printf("podaj liczby calkowite: ");
    if (scanf("%d %d", &x, &y) != 2 || x <= 0 || y <= 0) { //dwie liczby i musza byc calkowite+
        fprintf(stderr, "nie ma nwd i nww.\n");
        return 1;
    }

    int nwd = gcd(x, y); //z utworzonej biblioteki libmath oblicza nwd i
    int nww = lcm(x, y); //nww

    printf("nwd(%d, %d) = %d\n", x, y, nwd);
    printf("nww(%d, %d) = %d\n", x, y, nww);

    return 0;
}

// gcc -shared -o libmath.dll -fPIC math_utils.c
// gcc -o lab13-1 main.c libmath.dll