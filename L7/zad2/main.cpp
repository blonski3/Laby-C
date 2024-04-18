#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    char fileName[41]; // tablica na nazwę pliku
    char letter; // pojedyncza litera
    int count = 0; // licznik wystąpień litery

    cout << "podaj nazwe lub sciezke pliku: ";
    cin.getline(fileName, 41);

    ifstream file(fileName);
    if (!file) { // Sprawdzenie, czy udało się otworzyć plik
        cerr << "nie mozna otworzyc pliku." << endl;
        return 1;
    }

    cout << "podaj litere do policzenia: ";
    cin >> letter;


    string line; // przechowywuje linie z pliku
    while (getline(file, line)) { // wczytuje linie z pliku
        for (char x : line) { // petla po znakach w linii
            if (tolower(x) == tolower(letter)) { // sprawdzanie znaku, tolower zamienia pliki na male
                count++; // inkrementacja
            }
        }
    }

    // wyswietlenie wyniku
    cout << "litera '" << letter << "' wystepuje w pliku " << count << " razy" << endl;

    // zamknięcie pliku
    file.close();

    return 0; // zakonczenie programu
}
