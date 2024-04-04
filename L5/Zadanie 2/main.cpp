#include <iostream>
#include "fib.h"

int main() {

    unsigned int n;

    std::cout << "Podaj numer wyrazu ciagu Fibonacciego: ";
    std::cin >> n;

    int result = fibonacci(n);
    std::cout << "Wartosc " << n << "-tego wyrazu ciagu Fibonacciego to: " << result << std::endl;

    return 0;
}
