//
// Created by josecespedes on 4/8/19.
//
#include <iostream>
#ifndef DATOS2_TAREA_EXTRACLASE_1_SERVER_LINKEDLIST_H
#define DATOS2_TAREA_EXTRACLASE_1_SERVER_LINKEDLIST_H

#include "Node.h"
using namespace std;

class LinkedList {

private:
    int len;
    Node* head;


public:
    LinkedList();
    void addFirst(int data);
    void deleteFirst();
    void editByPos(int pos, int data);
    int getByPos(int pos);
    void printList();
    int getLen();
    ~LinkedList();
    char* listToChar();
};


#endif //DATOS2_TAREA_EXTRACLASE_1_SERVER_LINKEDLIST_H
