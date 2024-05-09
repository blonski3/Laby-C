#include <stdio.h>
#include "triangle.h"

int main() {
    Point_t points[3]; // tablica dla trojkata

    // wspolrzedne
    printf("podaj wspolrzedne punktu 1 (x y): ");
    scanf("%lf %lf", &points[0].x, &points[0].y);

    printf("podaj wspolrzedne punktu 2 (x y): ");
    scanf("%lf %lf", &points[1].x, &points[1].y);

    printf("podaj wspolrzedne punktu 3 (x y): ");
    scanf("%lf %lf", &points[2].x, &points[2].y);
    printf("\n");

    printf("czy jest prostokatny:\t%s", isRightTriangle(points) ? "true" : "false"); // ? - if     : - if else tak jakby

    return 0;
}