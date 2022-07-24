#include <stdio.h>

void printHello(){
    printf("Hello from void function\n");
}

int return42(){
    return 42;
}

int add(int a, int b){
    return a + b;
}

int main(){

    int num = 500;

    void* genericPointer = &num;

    // void* to an int*
    printf("The value of num is %d\n", *(int*)genericPointer);

    // void* to a void function 
    genericPointer = printHello;
    ((void(*)())genericPointer)();

    // void* to an int function
    genericPointer = return42;
    int result = ((int(*)())genericPointer)();
    printf("The return value of return42 function is %d\n", result);

    //void* to an int function with arguments 
    genericPointer = add;
    result = ((int(*)(int, int))genericPointer)(6,5);
    printf("The return value of add(%d, %d) function is %d\n",6 ,5 ,result);

    //Notes: The return value of malloc is a void*, so we cast the type to the one we use

    return 0;
}