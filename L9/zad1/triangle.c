#include <stdio.h>
#include <math.h>
#include "triangle.h"

bool isRightTriangle(Point_t points[]) {

    // dlugosc bokow
    double a = sqrt(pow(points[0].x - points[1].x, 2) + pow(points[0].y - points[1].y, 2));
    double b = sqrt(pow(points[1].x - points[2].x, 2) + pow(points[1].y - points[2].y, 2));
    double c = sqrt(pow(points[0].x - points[2].x, 2) + pow(points[0].y - points[2].y, 2));

    // dlugosci bokow
    printf("dlugosc a: %.2f\n", a);
    printf("dlugosc b: %.2f\n", b);
    printf("dlugosc c: %.2f\n", c);
    printf("\n");

    double eps = 1E-6; // precyzja

     // pitagoras i precyzja
    return ((a * a + b * b - c * c < eps) || (a * a + c * c - b * b < eps) || (b * b + c * c - a * a < eps));  // || - lub

}
