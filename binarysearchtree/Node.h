//
// Created by josecespedes on 4/8/19.
//

#ifndef DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H
#define DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H


class Node {

private:
    int node_key; /** Información del nodo */
    Node* left; /** Referencia al nodo de la izquierda */
    Node* right; /** Referencia al nodo de la derecha */

public:
    /**
     * Devuelve la referencia del nodo de la izquierda.
     * @return left
     */
    Node* getLeft();
    /**
     * Asigna la referencia del nodo de la izquierda.
     * @param izq
     */
    void setLeft(Node* izq);
    /**
     * Devuelve la referencia del nodo de la derecha.
     * @return
     */
    Node* getRight();
    /**
     * Asigna la referencia del nodo de la derecha.
     * @param der
     */
    void setRight(Node* der);
    /**
     * Devuelve la información del nodo.
     * @return
     */
    int getKey();
    /**
     * Asigna la información del nodo.
     * @param key
     */
    void setKey(int key);

};


#endif //DATOS2_TAREA_EXTRACLASE_1_SERVER_NODE_H
