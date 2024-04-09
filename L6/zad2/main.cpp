#include "iostream"
#include "convertCase.h"

int main () {

    const unsigned int arraySize = 26; // rozmiar tablicy [25 znakow]
    char text[arraySize]; // znaki

    // pobieranie znakow
    std::cout << "wpisz cos: ";
    std::cin.getline(text, arraySize); // pobieranie tekstu i zapisanie go w tablicy

    convertCase(text); // wywolanie funkcji do zmiany znakow

    std::cout << "zmiana liter: " << text << std::endl;

    return 0;
}