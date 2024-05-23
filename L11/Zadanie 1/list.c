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

void push(Node_t * root, int value) {
	Node_t * currentNode = root;
	if (currentNode != NULL) {
		while (currentNode->tail != NULL)
			currentNode = currentNode->tail; //przechodzenie do nastepnej komorki
		currentNode->tail = createNode(value); //tworzenie nowej komorki i przypisanie wskaznika przedostatniej
	}
}

void printList(Node_t * root) {
	Node_t * currentNode = root;
	while (currentNode != NULL) { //wyswietlanie danych az currentNode nie bedzie puste
		printf("%d\n", currentNode->head);
		currentNode = currentNode->tail;
	}
}

Node_t * createList(unsigned int nodeCount, ...) {
    if (nodeCount == 0)
        return NULL;

    va_list args;
    va_start(args, nodeCount); //args zaczynaja sie po nodeCount

    int firstValue = va_arg(args, int); //pierwsza wartosc (root)

    Node_t * root = createNode(firstValue); //tworzymy pierwszy node
    if (root == NULL) {
        va_end(args);
        return NULL;
    }

    for (int i = 1; i < nodeCount; i++) { //dodawanie elementow do listy
        int value = va_arg(args, int); //przypisywanie kolejnych wartosci do value
        push(root, value); //tworzy node i dodaje na koniec listy
    }

    va_end(args);
    return root; //zwracanie adresu pierwszej komorki

}