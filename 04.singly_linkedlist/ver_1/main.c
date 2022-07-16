#include <stdio.h>
#include "linkedlist.h"

void unitTest1(){
    linkedlist_t* newlist = CreateLinkedListOfFiveItems();
    AppendToLinkedList(newlist,1);
    AppendToLinkedList(newlist,2);
    AppendToLinkedList(newlist,3);
    PrintLinkedList(newlist);
    FreeLinkedList(newlist);
}

void unitTest2(){
    linkedlist_t* newlist = CreateLinkedList();
    AppendToLinkedList(newlist,29);
    PrintLinkedList(newlist);
    FreeLinkedList(newlist);
}

int main(){
    unitTest1();
    unitTest2();
    return 0;
}