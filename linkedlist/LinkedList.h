/**
 * @author José Antono Céspedes Downing
 * Declaración de la clase LinkedList
 * Basada en:
 * https://www.youtube.com/watch?v=H5lkmKkfjD0
 * https://www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr
 */
#include <iostream>
#ifndef DATOS2_TAREA_EXTRACLASE_1_SERVER_LINKEDLIST_H
#define DATOS2_TAREA_EXTRACLASE_1_SERVER_LINKEDLIST_H


#include "Node.h"
using namespace std;

class LinkedList {

private:
    int len; /** Largo de la lista */
    Node* head; /** Primer nodo de la lista */

public:
    /**
     * Constructor de la clase LinkedList
     */
    LinkedList();
    /**
     * Añade un elemento al inicio de la lista.
     * @param data
     */
    void addFirst(int data);
    /*
     * Elimina el elemento al inicio de la lista.
     */
    void deleteFirst();
    /**
     * Edita un elemento dada su posición.
     * @param pos
     * @param data
     */
    void editByPos(int pos, int data);
    /**
     * Devuelve un elemento dada su posición.
     * @param pos
     * @return
     */
    int getByPos(int pos);
    /**
     * Imprime la lista.
     * @return pos
     */
    void printList();
    /**
     * Obtiene el largo de la lista.
     * @return
     */
    int getLen();
    /**
     * Borra la lista.
     */
    void deleteList();
    /**
     * Destructor de la lista.
     */
    ~LinkedList();
    /**
     * Convierte la lista en un char array.
     * @return lista como char array
     */
    char* listToChar();
};


#endif //DATOS2_TAREA_EXTRACLASE_1_SERVER_LINKEDLIST_H
