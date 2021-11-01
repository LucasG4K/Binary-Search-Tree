#include "tree.hpp"
#define VECTSIZE 13

int main() {
    Tree tree;
    Node *node = tree.initializeTree();
    Item item;
    int vector[] = {12, 7, 13, 23, 11, 3, 4, 8, 10, 99, 1, 17, 9};

    cout << "Array: ";
    for (int i = 0; i < VECTSIZE; i++) {
        item.value = vector[i];
        tree.insertValueOnTree(&node, item);
        cout << vector[i] << " ";
    }

    cout << endl << "PreOrder: ";
    tree.preOrderPrintTree(node);
    cout << endl << "InOrder: ";
    tree.inOrderPrintTree(node);
    cout << endl << "PostOrder: ";
    tree.postOrderPrintTree(node);
}