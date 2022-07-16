#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

//malloc a new linked list and then return a pointer to that linked list
linkedlist_t* CreateLinkedList(){
    linkedlist_t* newList = (linkedlist_t*)malloc(sizeof(linkedlist_t)*1);
    newList->head = NULL;
    return newList;
}

//print the linked list items
void PrintLinkedList(linkedlist_t* list){
    node_t* iter = list->head;
    while (iter != NULL){
        printf("Data : %d\n", iter->data);        
        iter = iter->next;
    }
    
}

//add items to the linked list
//malloc a new node add data and next fields
//loop and append to the end of the list
void AppendToLinkedList(linkedlist_t* list, int data){
    node_t* newnode = (node_t*)malloc(sizeof(node_t)*1);
    newnode->data = data;
    newnode->next = NULL;

    if(list->head == NULL){
        list->head = newnode;
    }else{
        node_t* iter = list->head;
        while(iter->next != NULL){
            iter = iter->next;
        }
        iter->next = newnode;
    }

}

//create a linked list of five items
linkedlist_t* CreateLinkedListOfFiveItems(){
    linkedlist_t* newLinkedList = CreateLinkedList();
    
    node_t* newnode1 = (node_t*)malloc(sizeof(node_t)*1);
    newnode1->data = 200;

    node_t* newnode2 = (node_t*)malloc(sizeof(node_t)*1);
    newnode2->data = 300;

    node_t* newnode3 = (node_t*)malloc(sizeof(node_t)*1);
    newnode3->data = 400;

    node_t* newnode4 = (node_t*)malloc(sizeof(node_t)*1);
    newnode4->data = 500;

    node_t* newnode5 = (node_t*)malloc(sizeof(node_t)*1);
    newnode5->data = 600;

    newnode1->next = newnode2;
    newnode2->next = newnode3;
    newnode3->next = newnode4;
    newnode4->next = newnode5;
    newnode5->next = NULL;

    newLinkedList->head = newnode1;
    return newLinkedList;
}

//free the heap memory of both linked list and each node in the list
void FreeLinkedList(linkedlist_t* list){
    if(list == NULL){
        return;
    }
    node_t* current = list->head;
    if(current == NULL){
        free(list);
        return;
    }
    node_t* next = current->next;
    while(current != NULL){
        free(current);
        current = next;
        if(current != NULL){
            next = current->next;
        }
    }
    
    free(list);
}