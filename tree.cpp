#include "tree.hpp"

Node* Tree::initializeTree() {
    return NULL;
}

void Tree::insertValueOnTree(Node **node, Item requestedValue) {
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

void Tree::removeValueFromTree(Node *node, Item requestedValue){

}

void Tree::preOrderPrintTree(Node *node){
    if (node != NULL) {
        preOrderPrintTree(node->left);
        preOrderPrintTree(node->right);
        cout << node->item.value << " ";
    }
}

void Tree::inOrderPrintTree(Node *node){
    if (node != NULL) {
        inOrderPrintTree(node->left);
        cout << node->item.value << " ";
        inOrderPrintTree(node->right);
    }
}

void Tree::postOrderPrintTree(Node *node){
    if (node != NULL) {
        cout << node->item.value << " ";
        postOrderPrintTree(node->left);
        postOrderPrintTree(node->right);
    }
}