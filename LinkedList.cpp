//
// Created by josecespedes on 4/8/19.
//

#include "LinkedList.h"
#include <iostream>
#include <cstdlib>

using namespace std;

LinkedList::LinkedList() {
    head = NULL;
    len = 0;
}

bool LinkedList::isEmpty() {
    return head == NULL;
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
    temp -> node_data = data;
    temp -> next = head;
    head = temp;

    len+=1;
}

void LinkedList::deleteFirst() {
    if(isEmpty()){
        cout<< "Lista vacìa";
        return;
    }
    else{
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
}

void LinkedList::editByPos(int pos, int data) {



}

void LinkedList::printList() {
    Node* curr = head;
    while(curr != NULL){
        cout << curr -> index <<endl;
        curr = curr -> next;
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    Node* next;

    while(current != NULL){
        next = current->next;
        delete current;
        current = next;
    }
}

int LinkedList::Node::getIndex() {
    return index;
}