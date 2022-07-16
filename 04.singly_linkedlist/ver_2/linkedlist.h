#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node
{
    int data;
    struct node* next;
} node_t;

/*
    Tried this approach to avoid looping,
    to append the item to the end of the list.
    But it doesn't work in every case.
*/
typedef struct linkedlist
{
    node_t* head;
    int index;
} linkedlist_t;


//malloc a new linked list and then return a pointer to that linked list
linkedlist_t* CreateLinkedList();
linkedlist_t* CreateLinkedListOfFiveItems();

//print the linked list items
void PrintLinkedList(linkedlist_t* list);

//add items to the linked list
//malloc a new node add data and next fields
//loop and append to the end of the list
void AppendToLinkedList(linkedlist_t* list, int data);

//free the heap memory of both linked list and each node in the list
void FreeLinkedList(linkedlist_t* list);

#endif