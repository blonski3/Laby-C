#include "math_utils.h"

int gcd(int x, int y) { //nwd, algorytm euklidesa
    while (y != 0) { // petla trwa dopoki y nie jest zerem
        int temp = y; // temp przchowuje wartosc y
        y = x % y;    // y staje się reszta z dzielenia
        x = temp;     // x przyjmuje stara wartosc y
    }
    return x; // zwracamy najwiekszy dzielnik NWD
}

int lcm(int x, int y) { //nww
        return (x * y) / gcd(x, y); // obliczamy nww na podstawie nwd
}
