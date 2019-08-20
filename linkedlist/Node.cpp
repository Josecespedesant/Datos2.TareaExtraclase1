/*
 * Creado por: José Antonio Céspedes Downing
 * Declaración de la clase Nodo.
 */

#include "Node.h"

/**
 * Devuelve el indice del nodo.
 * @return index
 */
int Node::getIndex() {return index;}

/**
 * Asigna el indice del nodo.
 * @param pos
 */
void Node::setIndex(int pos) {index = pos;}

/**
 * Devuelve el siguiente nodo.
 * @return next
 */
Node* Node::getNext() {return next;}

/**
 * Asigna el siguiente nodo.
 * @param next_node
 */
void Node::setNext(Node *next_node) {next = next_node;}

/**
 * Devuelve la información del nodo.
 * @return data
 */
int Node::getData() {return node_data;}

/**
 * Asigna la información del nodo
 * @param data
 */
void Node::setData(int data) {node_data = data;}