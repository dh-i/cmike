#include <stdio.h>
#include "linkedlist.h"

void unitTest1(){
    linkedlist_t* newlist = CreateLinkedList();
    AppendToLinkedList(newlist,1);
    AppendToLinkedList(newlist,2);
    AppendToLinkedList(newlist,3);
    AppendToLinkedList(newlist,4);
    AppendToLinkedList(newlist,5);
    PrintLinkedList(newlist);
    FreeLinkedList(newlist);
}

void unitTest2(){
    /*
        This doesn't work!!!!!!
        Explanation in AppendToLinkedList--->
    */
    linkedlist_t* newlist = CreateLinkedListOfFiveItems();
    AppendToLinkedList(newlist,4);
    AppendToLinkedList(newlist,7);
    PrintLinkedList(newlist);
    FreeLinkedList(newlist);
}

int main(){
    unitTest1();
    unitTest2();
    return 0;
}