//
// Created by josecespedes on 4/8/19.
//

#ifndef DATOS2_TAREA_EXTRACLASE_1_SERVER_BINARYSEARCHTREE_H
#define DATOS2_TAREA_EXTRACLASE_1_SERVER_BINARYSEARCHTREE_H
#include <vector>
#include <iostream>
#include <cstdlib>
#include "Node.h"
using namespace std;

class BinarySearchTree {
private:
    Node* root;


public:
    BinarySearchTree();
    bool isEmpty() const { return root==NULL; }
    void print_inorder();
    void inorder(Node* nodo);
    void insert(int data);
    void remove(int data);

};


#endif //DATOS2_TAREA_EXTRACLASE_1_SERVER_BINARYSEARCHTREE_H
