//
// Created by josecespedes on 4/8/19.
//

#include "Node.h"

int Node::getIndex() {return index;}
void Node::setIndex(int pos) {index = pos;}
Node* Node::getNext() {return next;}
void Node::setNext(Node *next_node) {next = next_node;}
int Node::getData() {return node_data;}
void Node::setData(int data) {node_data = data;}