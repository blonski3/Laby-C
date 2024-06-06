#include <stdio.h>
#include "reader.h"

char readChar() {
	char character;
	while ((character = getchar()) == '\n' || character == EOF) {} //getchar odczytuje znak, EOF - end of file
	return character;
}