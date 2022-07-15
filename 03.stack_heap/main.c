#include <stdio.h>
#include <stdlib.h>

int* allocateOnHeap(int size) {
    //allocate memory to heap
    int* array = (int*)malloc(size * sizeof(int));
    for(int i=0; i<size; i++){
        //  array[i] = i*2;
         *(array+i) = (i+1)*2;
    }
    //return the pointer to the array in heap
    return array;
}

int allocateOnStack(void){
    int array[3] = {33, 44, 55};
   
    for(int i=0; i<3; i++){
        printf("%d \n", *(array+i));
    }
    printf("\n \n");
    //we cannot return a pointer here as the memory will be cleared after returning
    return 0;
}

int main(){
    int size = 10;
    allocateOnStack();

    //store the pointer returned after allocating memory in heap to arrayp var
    int* arrayp = allocateOnHeap(size);

    for(int i=0; i<size; i++){
        // printf("%d \n", *(arrayp+i));
        printf("%d \n", arrayp[i]);
    }

    //free allocated memory
    free(arrayp);
    return 0;
}