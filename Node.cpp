#include "Node.hpp"
#include <stdlib.h>

Node::Node(int value)
{
    this->value = value;
    this->leftChild = NULL;
    this->rightChild = NULL;
    this->parent = NULL;
}
int Node::getValue()
{
    return this->value;
}
Node* Node::getParent()
{
    return this->parent;
}

Node* Node::getRightChild()
{
    return this->rightChild;
}

Node* Node::getLeftChild()
{
    return this->leftChild;
}

void Node::setParent(Node* parent)
{
    this->parent = parent;
}

void Node::setChild(Node* child)
{
    if(child->getValue() <= this->value)
    {
        this->leftChild = child;
    }
    else
    {
        this->rightChild = child;
    }
}