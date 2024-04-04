#include <iostream>
#include "multiply.h"

int main() {

    std::cout << "Mnozenie liczb calkowitych: " << multiply(3, 4) << std::endl;
    std::cout << "Mnozenie liczb zmiennoprzecinkowych: " << multiply(3.5f, 1.5f) << std::endl;

    return 0;
}



