//
// Created by josecespedes on 4/8/19.
//

#ifndef DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H
#define DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H


class Node {

private:
    int node_key;
    Node* left;
    Node* right;

public:
    Node* getLeft();
    void setLeft(Node* izq);
    Node* getRight();
    void setRight(Node* der);
    int getKey();
    void setKey(int key);

};


#endif //DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H
