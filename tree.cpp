#include "tree.hpp"

Node *initializeTree() {
    return NULL;
}

void insertValueOnTree(Node **node, Item requestedValue) {
    if (*node == NULL) {
        *node          = (Node*)malloc(sizeof(Node));
        (*node)->item  = requestedValue;
        (*node)->left  = NULL;
        (*node)->right = NULL;
    } else {
        if ((*node)->item.value > requestedValue.value) {
            insertValueOnTree(&(*node)->left, requestedValue);
        } else if ((*node)->item.value < requestedValue.value) {
            insertValueOnTree(&(*node)->right, requestedValue);
        }
    }
}

void removeValueFromTree(Node *node, Item requestedValue){

}

void preOrderPrintTree(Node *node){
    if (node != NULL) {
        preOrderPrintTree(node->left);
        preOrderPrintTree(node->right);
        cout << node->item.value << " ";
    }
}

void inOrderPrintTree(Node *node){
    if (node != NULL) {
        inOrderPrintTree(node->left);
        cout << node->item.value << " ";
        inOrderPrintTree(node->right);
    }
}

void postOrderPrintTree(Node *node){
    if (node != NULL) {
        cout << node->item.value << " ";
        postOrderPrintTree(node->left);
        postOrderPrintTree(node->right);
    }
}