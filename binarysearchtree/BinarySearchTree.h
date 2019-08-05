//
// Created by josecespedes on 4/8/19.
//

#ifndef DATOS2_TAREA_EXTRACLASE_1_SERVER_BINARYSEARCHTREE_H
#define DATOS2_TAREA_EXTRACLASE_1_SERVER_BINARYSEARCHTREE_H

#include "Node.h"

class BinarySearchTree {
private:
    Node root;

public:
    void insertNode(int data);
    void deleteNode(int data);

};


#endif //DATOS2_TAREA_EXTRACLASE_1_SERVER_BINARYSEARCHTREE_H
