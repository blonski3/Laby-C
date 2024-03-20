#include "calculator.h"

// definicje funkcji

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        quitWithError();
    }
    return a / b;
}

void quitWithError() {
    std::cerr << "Error: Dzielenie przez zero" << std::endl;
    exit(EXIT_FAILURE);
}

// deklaracja funkcji calculate, wykonuje dzialania matematyczne na dwoch liczbach
float calculate(Operation op, float a, float b) {
    switch (op) { // switch - instrukcja wybory, op - zmienna typu operation (enum class)
        case Operation::ADD:
            return add(a, b);
        case Operation::SUBTRACT:
            return subtract(a, b);
        case Operation::MULTIPLY:
            return multiply(a, b);
        case Operation::DIVIDE:
            return divide(a, b);
        default:
            quitWithError();
    }
}