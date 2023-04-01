#ifndef bst_h
#define bst_h
#include <iostream>
using std::cout;

class Node{
    public:
    int data;
    Node *left, *right; // no parent node
    Node();
};

Node::Node(){
    data = -1;
    left = nullptr;
    right = nullptr;
}

class BST{
    private:
    int key;
    public:
    BST();
    Node* insert(Node *root, int key);
    Node* erase(Node *root, int key);
    void preOrder(Node *node);
    void inOrder(Node *node);
    void postOrder(Node *node);
};

BST::BST(){key = -1;}

Node* BST::insert(Node *root, int key){

    if (root == nullptr){
        root = new Node();
        root->data = key;
        return root;
    }
    else if (key <= root->data)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
    return root;
}

Node* BST::erase(Node *root, int key){
    if (root->data == key){
        if (root->left == nullptr && root->right == nullptr){
            delete root;
            root = nullptr;
        }
        else if (root->left == nullptr){ // right child exists
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == nullptr){ // left child exists
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        else{ // both children exist
            Node *temp = root->right;
            while (temp->left != nullptr)
                temp = temp->left;
            root->data = temp->data;
            root->right = erase(root->right, temp->data);
        }
    }
    else if (key < root->data)
        root->left = erase(root->left, key);
    else
        root->right = erase(root->right, key);
    return root;
}
void BST::preOrder(Node *node){
    if (node == nullptr)
        return;
    cout << node->data << '\n';
    preOrder(node->left);
    preOrder(node->right);
}
void BST::inOrder(Node *node){
    if (node == nullptr)
        return;
    inOrder(node->left);
    cout << node->data << '\n';
    inOrder(node->right);
}

void BST::postOrder(Node *node){
    if (node == nullptr)
        return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << '\n';
}
#endif