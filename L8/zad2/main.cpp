#include <iostream>

using namespace std;

int main() {
    int n;

    // Pobierz wymiar macierzy od użytkownika
    cout << "podaj rozmiar macierzy kwadratowej: ";
    cin >> n;

    //alokowanie pamieci do macierzy n*n
    int **matrix = new int*[n]; //dyn alokowana tablica wkaznikow dla wierszy
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n]; //dla kazdego wiersza alokuje pamiec na tablice o dlugosci n
    }

    cout << endl;

    //pobieranie i zapisywanie liczb do macierzy do odpowniednich komorek
    cout << "podaj " << n * n << " liczb do macierzy:" << endl;
    for (int x = 0; x < n; ++x) {       // x i y < n bo liczymy od 0 do n-1
        for (int y = 0; y < n; ++y) {
            cin >> matrix[x][y];
        }
    }

    cout << endl;

    //wyswietlanie macierzy
    cout << "macierz:" << endl;
    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < n; ++y) {
            cout << matrix[x][y] << " ";
        }
        cout << endl;
    }

    cout << endl;

    //zwalnianie zaalokowanej pamieci dla tablicy wskaznikow
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}