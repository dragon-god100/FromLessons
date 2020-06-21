#include "../include/Node.h"
#include <iostream>
using namespace std;



void Node::push(struct Node ** head, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node *last = *head;  /* used in step 5*/

    /* 2. put in the data  */
    new_node->data  = new_data;

    /* 3. This new node is going to be the last node, so make next
          of it as NULL*/
    new_node->next = NULL;

    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head == NULL)
    {
       *head = new_node;
       return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}

Node* Node::sortLinkedList()
{
    Node* start = this;
    Node* current = this;
    Node* tempNode = nullptr;
    Node* prev = nullptr;
    bool changeFlag = true;

    while(changeFlag)
    {
        current = start;
        changeFlag = false;
        prev = nullptr;

        while (current->next != nullptr)
        {
            tempNode = current->next;

            if (current->data > tempNode->data)
            {
                changeFlag = true;
                Node* temp = tempNode->next;
                tempNode->next = current;
                current->next = temp;
                if(prev != nullptr) prev->next = tempNode;
                prev = tempNode;
                if(current == start) start = tempNode;
            }
            else{
                prev = current;
                current = current->next;
            }
        }
    }

    return start;
}

 void Node::printLinkedList(){
     Node* current = this;
     while(current != nullptr){
          cout << current->data << ", ";
          current = current->next;
     }
}

void Node::removeElement(int remValue) {
    Node* prev = this; // empty header
    Node* current = this->next; // the first valid node
    while(current != NULL) {
        if(current->data ==  remValue) {
            break;
        }
        else {
            prev = current;
            current = current->next; // go to next value
        }
    }
    if(current == NULL) { // if we reached end of list or the list is empty
        cout << "Can't remove value: no match found.\n";
    }else {
        cout << "Deleting: " << current << "\n";
        prev->next = current->next; // unlink the node you remove
        delete current; // delete the node
    }
}
