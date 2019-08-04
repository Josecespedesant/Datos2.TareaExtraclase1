//
// Created by josecespedes on 4/8/19.
//
#include <iostream>
#ifndef DATOS2_TAREA_EXTRACLASE_1_SERVER_LINKEDLIST_H
#define DATOS2_TAREA_EXTRACLASE_1_SERVER_LINKEDLIST_H


class LinkedList {
private:
    typedef struct Node{
        int index;
        int node_data;
        Node *next;
        int getIndex();

    }* nodePtr;

    int len;
    nodePtr head;

public:
    LinkedList();
    bool isEmpty();
    void addFirst(int data);
    void deleteFirst();
    void editByPos(int pos, int data);
    void getByPos(int pos);
    void printList();
    int getLen();
    ~LinkedList();
};


#endif //DATOS2_TAREA_EXTRACLASE_1_SERVER_LINKEDLIST_H
