#ifndef binaryst_h
#define binaryst_h
#include <iostream>
using std::cout;

class Node{
    public:
    int data;
    Node *left, *right;
};
class BST{
    private:
    int key;
    public:
    BST();
    Node* insert(Node *root, int key);
    void deleteNode();
    void inOrder(Node *node);
};

BST::BST(){key = -1;}
Node* BST::insert(Node *root, int key){

    if (root == NULL){
        root = new Node();
        root->data = key;
        return root;
    }
    else if (key <= root->data){
        root->left = insert(root->left, key);
    }
    else{
        root->right = insert(root->right, key);
    }
    return root;
}

void BST::inOrder(Node *node){
    if (node == NULL)
        return;
    inOrder(node->left);
    cout << node->data << '\n';
    inOrder(node->right);
}

#endif