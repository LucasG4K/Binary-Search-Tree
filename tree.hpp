#ifndef TREE_HPP
#define TREE_HPP

#include <iostream>
using namespace std;

class Item {
public:
    int value;        
};

class Node {
public:
    Node *left;
    Node *right;
    Item item;
};

class Tree {
public:
    Node *initializeTree();                                     // root of the tree          obs: to return a Null Ptr from a function, it must be a Ptr function too
    void insertValueOnTree(Node **node, Item requestedValue);   // insert some requested int value on tree
    void removeValueFromTree(Node *node, Item requestedValue);  // remove ....  .......  ...  ...  from tree
    void preOrderPrintTree(Node *node);                         // print tree PreOrder
    void inOrderPrintTree(Node *node);                          //  ...  .... InOrder
    void postOrderPrintTree(Node *node);                        //  ...  .... PostOrder
};

#endif