#include <iostream>

// definicja enum class Operation - reprezentuje operacje arytmetyczne
enum class Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
};

// dekracje funckji
float add(float a, float b); // dodawanie
float subtract(float a, float b); // odejmowanie
float multiply(float a, float b); // mnozenie
float divide(float a, float b); // dzielenie
void quitWithError(); // funkcja od bledow

// deklaracja funkcji calculate, wykonuje dzialania matematyczne na dwoch liczbach
float calculate(Operation op, float a, float b);
