#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int add(int a, int b){
    return a + b;
}

int multiply(int a, int b){
    return a * b;
}

int main(){
    srand(time(NULL));
    int randNum = rand() % 2 + 1;
    printf("The random number generated is %d\n", randNum); 
    if(randNum == 1){
        printf("Enter the value of x and y to multiply\n");
    }else{
        printf("Enter the value of x and y to add\n");
    }
    int x;
    int y;
    printf("Enter the value of x :\t");
    scanf("%d", &x);
    
    printf("Enter the value of y :\t");
    scanf("%d", &y);
    int (*pfn)(int, int);
    if(randNum == 1){
        //we don't have to explicitly pass pointers
        pfn = multiply;
        printf("The result of %d * %d = %d\n", x , y, pfn(x,y));
    }else{
        //we can also pass the address as below
        pfn = &add;
        printf("The result of %d + %d = %d\n", x , y, pfn(x,y));
    }
    return 0;
}