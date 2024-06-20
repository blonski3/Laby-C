#include "stdio.h"
#include <cassert>
#include "fib.h"

// Testy jednostkowe przy użyciu assert
int fibtest() {

    assert(fib(0) == 0);
    assert(fib(1) == 1);
    assert(fib(2) == 1);
    assert(fib(3) == 2);
    assert(fib(4) == 3);
    assert(fib(5) == 5);
    assert(fib(6) == 8);
    assert(fib(10) == 55);
    assert(fib(20) == 6765);
    assert(fib(30) == 832040);

    printf("jest ok.");

    return 0;

}