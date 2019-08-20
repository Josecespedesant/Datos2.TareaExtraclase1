/**
 * @author José Antono Céspedes Downing
 * Declaración de la clase LinkedList
 * Basada en:
 * https://www.youtube.com/watch?v=H5lkmKkfjD0
 * https://www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr
 */
#include "LinkedList.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

LinkedList::LinkedList() {
    head = NULL;
    len = 0;
}

/**
 * Obtiene el largo de la lista
 * @return len
 */
int LinkedList::getLen() {
    return len;
}

void LinkedList::addFirst(int data) {
    Node *temp = new Node;
    temp->setIndex(0);
    temp -> setData(data);
    temp -> setNext(head);
    head = temp;

    Node *aux = head->getNext();
    while(aux != NULL){
        aux->setIndex(aux->getIndex()+1);
        aux = aux->getNext();
    }
    len+=1;
}

void LinkedList::deleteFirst() {
    if(head == NULL){
        cout<< "Lista vacìa";
        return;
    }
    else{
        Node* temp = head;
        head = head -> getNext();
        delete temp;

        Node *aux = head;
        while(aux!=NULL){
            aux->setIndex(aux->getIndex()-1);
            aux = aux->getNext();
        }
        len-=1;
    }
}

void LinkedList::editByPos(int pos, int data) {
    if(head == NULL){
        cout<<"Lista vacía";
        return;
    }

    if(pos == 0 && head!=NULL){
        head->setData(data);
        cout << "Se ha editado correctamente la información del nodo";
    }

    else{
        Node *aux = head;
        while(aux != NULL){
            if(aux->getIndex() == pos){
                aux->setData(data);
                cout << "Se ha editado correctamente la información del nodo";
                break;
            }
            aux = aux->getNext();
        }
        cout << "No se ha encontrado el nodo en la posición especificada";
    }
}

int LinkedList::getByPos(int pos) {
    if(head == NULL){
        cout<<"Lista vacía";
        return NULL;
    }
    else{
        Node *aux = head;
        while(aux != NULL){
            if(aux->getIndex() == pos){
                return aux->getData();
            }
            aux = aux->getNext();
        }
        cout << "No se ha encontrado el nodo en la posición especificada" << endl;
    }
}

void LinkedList::printList() {
    Node* curr = head;
    while(curr != NULL){
        cout << curr -> getData() <<endl;
        curr = curr -> getNext();
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    Node* next;

    while(current != NULL){
        next = current->getNext();
        delete current;
        current = next;
    }
}

char* LinkedList::listToChar() {
    string final;
    if(head == NULL){
        return NULL;
    }
    else{
        Node* aux = head;
        while(aux != NULL){
            final = final + std::to_string(aux->getData())+"_";
            aux = aux->getNext();
        }
    }

    char *finalchar = new char[final.size()+1];
    strcpy(finalchar, final.c_str());

    return finalchar;

}

void LinkedList::deleteList() {

    Node* current = head;
    Node* next;

    while(current != NULL){
        next = current->getNext();
        free(current);
        current = next;
    }
    head = NULL;
}