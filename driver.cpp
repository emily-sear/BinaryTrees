#include "BinaryTree.hpp"
#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
    BinaryTree* tree = new BinaryTree();

    tree->addChild(new Node(3));
    tree->addChild(new Node(5));
    tree->addChild(new Node(1));
    tree->addChild(new Node(6));
    tree->addChild(new Node(4));
    tree->addChild(new Node(7));
    tree->addChild(new Node(12));
    tree->addChild(new Node(13));
    tree->addChild(new Node(9));
    tree->addChild(new Node(2));

    tree->visitInOrder(tree->getRoot());
    cout << endl;

    tree->visitPostOrder(tree->getRoot());
    cout << endl;

    tree->visitPreOrder(tree->getRoot());
    cout << endl;

    return 0;

}