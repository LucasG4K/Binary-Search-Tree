#include "tree.hpp"
#define VECTSIZE 13

int main() {
    Tree tree;
    Node *node = tree.initialize();
    Node *temp = tree.initialize();
    Item item;

    int vector[] = {12, 7, 13, 23, 11, 3, 4, 8, 10, 99, 1, 17, 9};
    int vectorSize = sizeof(vector) / sizeof(int);

    int toBeDeleted[] = {23, 11, 12, 8};
    int toBeDeletedSize = sizeof(toBeDeleted) / sizeof(int);

    cout << "Original Array: ";
    for (int i = 0; i < vectorSize; i++) {
        item.value = vector[i];
        tree.insertValue(&node, item);
        cout << vector[i] << " ";
    }

    cout << endl << endl << "Standard Tree:" << endl << "PreOrder: ";
    tree.preOrderPrint(node);
    cout << endl << "InOrder: ";
    tree.inOrderPrint(node);
    cout << endl << "PostOrder: ";
    tree.postOrderPrint(node);

    item.value = vector[4];
    tree.search(&node, &temp, item);
    cout << endl << endl << "Modified Tree:" << endl << "When we search for the number " << item.value << ", its Post-Order sub-Tree is: ";
    tree.postOrderPrint(temp);

    for (int i = 0; i < toBeDeletedSize; i++) {
        item.value = toBeDeleted[i];
        tree.removeValue(&node, item);
        cout << endl << "By removing " << item.value << ", the tree remains like: ";
        tree.postOrderPrint(node);
    }

    return 0;
}