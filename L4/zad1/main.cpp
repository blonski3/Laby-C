#include <iostream>
#include <iomanip>

int main() {
    int liczba1 = 123; // przykladowa liczba
    int szerokosc = 6; // szerokosc pola
    float liczba2 = 3.14159; // liczba zmiennoprzecinkowe
    int precyzja = 4; // liczba cyfr po przecinku

    // wyświetlenie liczby w reprezentacji szesnastkowej z baza (0x)
    std::cout << "Liczba w reprezentacji szesnastkowej: 0x" << std::hex << liczba1 << std::endl;

    // ustawienie szerokości pola i wyświetlenie wartości z dopelniajacymi zerami
    std::cout << "Liczba z dopelniajacymi zerami: " << std::setw(szerokosc) << std::setfill('0') << liczba1 << std::endl;

    // wyświetlenie liczby zmiennoprzecinkowej z okresloną precyzją
    std::cout << "Liczba zmiennoprzecinkowa: " << std::fixed << std::setprecision(precyzja) << liczba2 << std::endl;

    return 0;
}

