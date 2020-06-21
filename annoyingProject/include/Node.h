#ifndef NODE_H
#define NODE_H
#include "Node.h"

#include <iostream>

struct LinkNode {
    int data;
    LinkNode* next;
};

class Node
{
     public:
          int data;
          Node* next;

          void push(Node ** head, int new_data);
          Node* sortLinkedList();
          void printLinkedList();
          void removeElement(int remValue) ;

     private:
};

#endif // NODE_H
