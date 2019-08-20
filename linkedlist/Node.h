//
// Created by josecespedes on 4/8/19.
//

#ifndef DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H
#define DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H


class Node {

private:
    int index; /** Indice del nodo */
    int node_data; /** Información del nodo */
    Node* next; /** Referencia al siguiente nodo */

public:
    /**
     * Devuelve el indice del nodo.
     * @return index
     */
    int getIndex();
    /**
     * Asigna el indice del nodo.
     * @param pos
     */
    void setIndex(int pos);
    /**
     * Devuelve la información del nodo.
     * @return data
     */
    int getData();
    /**
     * Asigna la información del nodo.
     * @param data
     */
    void setData(int data);
    /**
     * Asigna la referencia al siguiente nodo.
     * @param next
     */
    void setNext(Node* next);
    /**
     * Devuelve la referencia del siguiente nodo.
     * @return
     */
    Node* getNext();

};


#endif //DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H
