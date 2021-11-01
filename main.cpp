#include "tree.hpp"
#define VECTSIZE 13

int main() {
    Node *node = initializeTree();
    Item item;
    int vector[] = {12, 7, 13, 23, 11, 3, 4, 8, 10, 99, 1, 17, 9};

    cout << "Array: ";
    for (int i = 0; i < VECTSIZE; i++) {
        item.value = vector[i];
        insertValueOnTree(&node, item);
        cout << vector[i] << " ";
    }

    cout << endl << "PreOrder: ";
    preOrderPrintTree(node);
    cout << endl << "InOrder: ";
    inOrderPrintTree(node);
    cout << endl << "PostOrder: ";
    postOrderPrintTree(node);
}