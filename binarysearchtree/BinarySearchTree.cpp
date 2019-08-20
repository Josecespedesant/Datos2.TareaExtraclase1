/**
 * @author José Antonio Céspedes Downing
 * Declaración de la clase BinarySearchTree
 * Basado en:
 * https://gist.github.com/harish-r/a7df7ce576dda35c9660
 * http://www.cplusplus.com/forum/general/1551/
 */
#include "BinarySearchTree.h"
#include <vector>

/**
 * Constructor de la clase BinarySearchTree
 */
BinarySearchTree::BinarySearchTree() {
    root = NULL;
}

/**
 * Método que ingresa un nuevo valor en el arol
 * @param data
 */
void BinarySearchTree::insert(int data) {
    Node* temp = new Node;
    Node* parent;
    temp->setKey(data);
    temp->setLeft(NULL);
    temp->setRight(NULL);
    parent = NULL;

    if(isEmpty()) {
        root = temp;
    }
    else{
        Node* curr;
        curr = root;

        while(curr){
            parent = curr;
            if(temp->getKey() > curr->getKey()){
                curr = curr->getRight();
            }
            else{
                curr = curr->getLeft();
            }
        }

        if(temp->getKey() < parent->getKey()){
            parent->setLeft(temp);
        }else{
            parent->setRight(temp);
        }
    }
}

/**
 * Método que recibe como parametro el valor a remover del arbol.
 * @param data
 */
void BinarySearchTree::remove(int data) {
    bool found = false;
    if(isEmpty()){
        cout<<"El arbol esta vacío"<<endl;
        return;
    }

    Node* curr;
    Node* parent;
    curr = root;

    while(curr != NULL){
        if(curr->getKey() == data){
            found = true;
            break;
        }
        else{
            parent = curr;
            if(data > curr->getKey()){
                curr = curr->getRight();
            }
            else{
                curr = curr->getLeft();
            }
        }
    }
    if(!found){
        cout<< "No se encontró la data"<<endl;
        return;
    }

    //Caso 1: Nodo con un solo hijo

    if((curr->getLeft() == NULL && curr->getRight() != NULL)||
    curr->getLeft()!= NULL && curr->getRight()==NULL){

        if(curr->getLeft() == NULL && curr->getRight() != NULL){
            if(parent->getLeft() == curr){
                parent->setLeft(curr->getRight());
                delete curr;
            }
            else{
                parent->setRight(curr->getRight());
                delete curr;
            }
        }
        else{
            if(parent->getLeft() == curr){
                parent->setLeft(curr->getLeft());
                delete curr;
            }else{
                parent->setRight(curr->getLeft());
                delete curr;
            }
        }
        return;
    }

    //Caso 2: Nodo hoja
    if(curr->getLeft() == NULL && curr->getRight() == NULL){
        if(parent->getLeft() == curr){
            parent->setLeft(NULL);
            delete curr;
        }
        else{
            parent->setRight(NULL);
            delete curr;
        }
        return;
    }

    //Caso 3: Nodo con dos hijos
    if(curr->getLeft() != NULL && curr->getRight() != NULL){
        Node* chkr;
        chkr = curr->getRight();

        if((chkr->getLeft() == NULL) && (chkr->getRight() == NULL)){
            curr = chkr;
            delete chkr;
            curr->setRight(NULL);
        }
        else{
            if((curr->getRight())->getLeft() != NULL){
                Node* lcurr;
                Node* lcurrp;
                lcurrp = curr->getRight();
                lcurr = (curr->getRight())->getLeft();
                while(lcurr->getLeft()!=NULL){
                    lcurrp = lcurr;
                    lcurr = lcurr->getLeft();
                }
                curr->setKey(lcurr->getKey());
                delete lcurr;
                lcurrp->setLeft(NULL);

            }
            else{
                Node* temp;
                temp = curr->getRight();
                curr->setKey(temp->getKey());
                curr->setRight(temp->getRight());
                delete temp;
            }
        }
        return;
    }
}

/**
 * Método publico para imprimir el arbol inorder.
 */
void BinarySearchTree::print_inorder() {
    inorder(root);
}

/**
 * Método privado que imprime el árbol inorder.
 * @param nodo
 */
void BinarySearchTree::inorder(Node *nodo) {
    if(nodo != NULL)
    {
        if(nodo->getLeft()) inorder(nodo->getLeft());
        cout<<" "<<nodo->getKey()<<" ";
        if(nodo->getRight()) inorder(nodo->getRight());
    }
    else return;
}