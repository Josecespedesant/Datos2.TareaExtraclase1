//
// Created by josecespedes on 4/8/19.
//

#include "Node.h"

int Node::getKey() {return node_key;}
Node* Node::getLeft() {return left;}
Node* Node::getRight() {return right;}
void Node::setKey(int key) {node_key = key;}
void Node::setLeft(Node *izq) {left = izq;}
void Node::setRight(Node *der) {right = der;}