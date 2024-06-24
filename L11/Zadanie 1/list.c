#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

static Node_t * createNode(int head) {
	Node_t * node = (Node_t *) malloc(sizeof(node)); //alokacja pamieci i przypisywanie do node adresu pamieci
	node->head = head;
	node->tail = NULL;
	return node;
}

void push(Node_t * root, int value) { //dodaje nowy wezel o wartosci value na koniec listy
	Node_t * currentNode = root;
	if (currentNode != NULL) {
		while (currentNode->tail != NULL)
			currentNode = currentNode->tail; //przechodzenie do nastepnej komorki
		currentNode->tail = createNode(value); //tworzenie nowej komorki i przypisanie wskaznika przedostatniej
	}
}

void printList(Node_t * root) { //wypisuje kolejne wartosci listy od wezla o adresie root
	Node_t * currentNode = root;
	while (currentNode != NULL) { //wyswietlanie danych az currentNode nie bedzie puste
		printf("%d\n", currentNode->head);
		currentNode = currentNode->tail;
	}
}

// zadanie

Node_t * createList(unsigned int nodeCount, ...) { //tworzenie listy o nodeCount elementów
    if (nodeCount == 0)
        return NULL;

    va_list args; //makro przechowywujace argumenty
    va_start(args, nodeCount); //inicjalizuje zmienna typu list, args zaczynaja sie po nodeCount

    int firstValue = va_arg(args, int); //pierwsza wartosc (root)

    Node_t * root = createNode(firstValue); //tworzymy pierwszy node
    if (root == NULL) {
        va_end(args);
        return NULL; //jesli utworzenie wezla sie nie powiedzie zwraca null
    }

    for (int i = 1; i < nodeCount; i++) { //dodawanie elementow do listy
        int value = va_arg(args, int); //przypisywanie kolejnych wartosci do value
        push(root, value); //tworzy node i dodaje na koniec listy
    }

    va_end(args);
    return root; //zwracanie adresu pierwszej komorki

}