#include <stdio.h>
#include <stdlib.h>


int main(){
    const int cols = 4;
    const int rows = 5;
    //creating dynamic 2d array
    //we can also create it as int**
    int* array2D = (int*)malloc(sizeof(int)*5*4); //5 rows and 4 cols

    int counter = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            array2D[cols*i + j] = counter++;
        }
    }

    //print our 2d array
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            //this is same as printing array2D[i][j]; 
            //this is to prove even 2d array is contiguous 
            printf("%d \t", array2D[cols*i+j]);
        }
        printf("\n");
    }

    //we can also create array as below
    int arr2d[rows][cols];

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            arr2d[i][j] = i+j;
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d \t", arr2d[i][j]);
        }
        printf("\n");
    }
    //Notes: This was at the start of the lecture
    // 1. when you pass an array to a function, the pointer to that array gets passed.
    // 2. Array and pointers are different.
}