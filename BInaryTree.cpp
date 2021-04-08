#include "BinaryTree.hpp"
#include <iostream> 

using namespace std;

BinaryTree::BinaryTree()
{
    this->root = NULL;
}

Node* BinaryTree::getRoot()
{
    return this->root;
}

void BinaryTree::setRoot(Node* root)
{
    this->root = root;
}

void BinaryTree::addChild(Node* child)
{
    bool check = true;
    Node* temp = root;
    if(this->root != NULL)
    {
        while(check)
        {
            if(child->getValue() <= temp->getValue())
            {
                if(temp->getLeftChild() != NULL)
                {
                    temp = temp->getLeftChild();
                }
                else
                {
                    temp->setChild(child);
                    check = false;
                }
            }
            else
            {
                if(temp->getRightChild() != NULL)
                {
                    temp =temp->getRightChild();
                }
                else
                {
                    temp->setChild(child);
                    check = false;
                }
            }
        }
    }
    else
    {
        this->root = child;
    }
}

void BinaryTree::visitInOrder(Node* root)
{
    //cout << "Made it" << endl;
 if(root != NULL)
 {
     visitInOrder(root->getLeftChild());
     cout << root->getValue() << " ";
     visitInOrder(root->getRightChild());
 }

}

void BinaryTree::visitPostOrder(Node* root)
{
    if(root != NULL)
    {
        visitPostOrder(root->getLeftChild());
        visitPostOrder(root->getRightChild());
        cout << root->getValue() << " ";
    }
}

void BinaryTree::visitPreOrder(Node* root)
{
    if(root != NULL)
    {
        cout << root->getValue() << " ";
        visitPostOrder(root->getLeftChild());
        visitPostOrder(root->getRightChild());
    }

}