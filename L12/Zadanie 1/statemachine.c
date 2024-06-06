#include "statemachine.h"
#include "reader.h"
#include "state.h"

typedef enum {ECHO, WRITE} State;

void exec() {
    State currentState = ECHO; //poczatkowy stan maszyny
    char c;

    //petla glowna, czyta znaki dopoki nie ma q
    while ((c = readChar()) != 'q') {
        switch (currentState) {
            case ECHO:
                if (c == 'w') {
                    currentState = WRITE; //przejscie do stanu WRITE
                } else if (c == 'e') {
                    currentState = ECHO; //pozostaje w stanie ECHO albo wraca do ECHO z WRITE
                } else {
                    echo(c); //wypisuje znak na standardowe wyjscie
                }
                break;
            case WRITE:
                if (c == 'w') {
                    currentState = WRITE; //pozostaje w stanie WRITE
                } else if (c == 'e') {
                    currentState = ECHO; //przejscie do stanu ECHO
                } else {
                    write(c); //zapisuje znak do pliku
                }
                break;
        }
    }
}