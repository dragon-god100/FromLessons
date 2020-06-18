#ifndef NODE_H
#define NODE_H
#include "Node.h"

#include <iostream>

class Node
{
     public:


          int data;
          Node* next;

          void push(Node ** head, int new_data);
          void  sortLinkedList();
          void printLinkedList();
          void removeElement(int remValue) ;

     private:
};

#endif // NODE_H
