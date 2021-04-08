#include "Node.hpp"
#include <string>

class BinaryTree
{
    private:
        Node* root;
    
    public: 
        BinaryTree();
        void addChild(Node* child);
        Node* getRoot();
        void setRoot(Node* root);
        void visitInOrder(Node* root);
        void visitPostOrder();
        void visitPreOrder();
};