/**
 * @author José Antonio Céspedes Downing
 * Declaración de la clase BinarySearchTree
 * Basado en:
 * https://gist.github.com/harish-r/a7df7ce576dda35c9660
 * http://www.cplusplus.com/forum/general/1551/
 */

#ifndef DATOS2_TAREA_EXTRACLASE_1_SERVER_BINARYSEARCHTREE_H
#define DATOS2_TAREA_EXTRACLASE_1_SERVER_BINARYSEARCHTREE_H
#include <vector>
#include <iostream>
#include <cstdlib>
#include "Node.h"
using namespace std;

class BinarySearchTree {
private:
    Node* root; /** Raiz del arbol */


public:
    /**
     * Constructor de la clase BinarySearchTree.
     */
    BinarySearchTree();
    /**
     * Devuelve si el arbol está vacío o no.
     * @return true | false
     */
    bool isEmpty() const { return root==NULL; }
    /**
     * Imprime el arbol inorder.
     */
    void print_inorder();
    /**
     * Método privado que imprime el arbol inorder.
     * @param nodo
     */
    void inorder(Node* nodo);
    /**
     * Inserta un nodo en el arbol.
     * @param data
     */
    void insert(int data);
    /**
     * Elimina un nodo del arbol.
     * @param data
     */
    void remove(int data);

};


#endif //DATOS2_TAREA_EXTRACLASE_1_SERVER_BINARYSEARCHTREE_H
