#include <iostream>
#include "binaryst.h"
using std::cout;

int main(){
    // Create a BST object
    BST bst;
    srand((unsigned)time(0));
    Node *root = NULL;
    for (int i = 0; i < 10; i++){
        int r = rand() % 10000 + 1;
        root = bst.insert(root, r);
    }
    bst.inOrder(root);

}