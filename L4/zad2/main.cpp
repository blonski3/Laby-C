#include <iostream>
#include "calculator.h"

int main() {
    float num1, num2;
    char operationSymbol;
    Operation op;

    // pobieranie danych
    std::cout << "Podaj pierwsza liczbe:";
    std::cin >> num1;
    std::cout << "Podaj druga liczbe:";
    std::cin >> num2;
    std::cout << "Podaj typ operacji:";
    std::cin >> operationSymbol;

    // przypisywanie operacji na podstawie symbolu
    switch (operationSymbol) {
        case '+':
            op = Operation::ADD; //dodawania
            break;

        case '-':
            op = Operation::SUBTRACT; // odejmowania
            break;

        case '*':
            op = Operation::MULTIPLY; // mnozenie
            break;

        case '/':
            op = Operation::DIVIDE; // dzielenie
            break;

        default: // gdy zaden z powyzszych nie pasuje
            quitWithError(); // niepoprawne operacje
    }

    // wywolanie i wyswietlenie wyniku
    std::cout << "Wynik:" << calculate(op, num1, num2) << std::endl;

    return 0;
}




