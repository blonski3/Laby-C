#include <iostream>
#include "calculator.h"

#include "calculator.h"

// definicje funkcji

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y == 0) {
        quitWithError();
    }
    return x / y;
}

void quitWithError() {
    std::cerr << "Error: Dzielenie przez zero" << std::endl;
    exit(EXIT_FAILURE);
}

float calculate(float x, float y, char * operations[], unsigned int size) {

    float result = 0.0f;

    for (unsigned int i = 0; i < size; i++) {

        // wybranie odpowiedniej operacji z tablicy

        if(std::string(operations[i]) == "add") {
            result += add(x,y);
        }
        else if (std::string(operations[i]) == "sub") {
            result += subtract(x,y);
        }
        else if (std::string(operations[i]) == "mul") {
            result += multiply(x,y);
        }
        else if (std::string(operations[i]) == "div") {
            result += divide(x,y);
        }
    }


}
