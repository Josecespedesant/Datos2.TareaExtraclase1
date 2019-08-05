//
// Created by josecespedes on 4/8/19.
//

#ifndef DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H
#define DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H


class Node {

private:
    int index;
    int node_data;
    Node* next;

public:
    int getIndex();
    void setIndex(int pos);
    int getData();
    void setData(int data);
    void setNext(Node* next);
    Node* getNext();

};


#endif //DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H
