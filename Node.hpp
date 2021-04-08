class Node
{
    private:
        int value;
        Node* parent;
        Node* rightChild;
        Node* leftChild;
    
    public: 
        Node(int value);
        int getValue();
        Node* getParent();
        Node* getRightChild();
        Node* getLeftChild();
        void setParent(Node* parent);
        void setChild(Node* child);
};