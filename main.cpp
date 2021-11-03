#include "tree.hpp"
#define VECTSIZE 13

int main() {
    Tree tree;
    Node *node = tree.initialize();
    Node *temp = tree.initialize();
    Item item;
    int vector[] = {12, 7, 13, 23, 11, 3, 4, 8, 10, 99, 1, 17, 9};

    cout << "Original Array: ";
    for (int i = 0; i < VECTSIZE; i++) {
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
    cout << endl << endl << "Modified Tree:" << endl << "Post-Order sub-Tree of " << item.value << " as main node: ";
    tree.postOrderPrint(temp);

    item.value = vector[5];
    tree.removeValue(&node, item);
    cout << endl <<  "By removing " << item.value << ", the new tree remains like: ";
    tree.postOrderPrint(node);

    return 0;
}