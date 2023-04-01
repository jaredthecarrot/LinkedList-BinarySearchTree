#include <iostream>
#include "bst.h"
using std::cout;

int main(){
    srand((unsigned)time(0));
    BST bst;
    //BST bst2;
    Node *root = nullptr;
    const int nums = 7;
    /*for (int i = 0; i < nums; i++){
        int k = rand() % 10000 + 1;
        root = bst.insert(root, k);
    }
    cout << "Preorder traversal of the given tree\n";
    bst.preOrder(root);
    cout << "\nInorder traversal of the given tree\n";
    bst.inOrder(root);
    cout << "\nPostorder traversal of the given tree\n";
    bst.postOrder(root);*/

    //bst2 is testing
    Node *root2 = nullptr;
    /*root2 = bst2.insert(root2, 50);
    root2 = bst2.insert(root2, 30);
    root2 = bst2.insert(root2, 20);
    root2 = bst2.insert(root2, 40);
    root2 = bst2.insert(root2, 70);
    bst2.inOrder(root2);
    bst2.erase(root2, 20);
    bst2.erase(root2, 70);
    cout << '\n';
    bst2.inOrder(root2);*/ // testing code, uncomment to test.

    return 0;
}   