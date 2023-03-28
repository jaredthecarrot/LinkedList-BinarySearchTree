#include <iostream>
#include "bst.h"
using std::cout;

int main(){
    srand((unsigned)time(0));
    BST bst;
    Node *root = NULL;
    const int nums = 10;
    for (int i = 0; i < nums; i++){
        int k = rand() % 10000 + 1;
        root = bst.insert(root, k);
    }
    bst.inOrder(root);
}