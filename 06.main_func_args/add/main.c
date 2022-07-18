#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    printf("argc : %d\n", argc);
    
    //This is to add two numbers 
    // if(argc != 3){
    //     printf("usage ./add 1 2");
    // }

    // long num1 = strtol(argv[1], NULL, 10);
    // long num2 = strtol(argv[2], NULL, 10);
    // long result = num1 + num2;
    
    // printf("The result of %ld + %ld = %ld\n", num1, num2, result );
    
    //This is to add variable number of numbers
    if(argc < 3){
        printf("Usage ./add 1 2");
    }

    long result = 0;
    for(int i=0; i<argc; i++){
        result += strtol(argv[i], NULL, 10);
    }
    printf("The sum of the numbers is %ld\n", result);

    return 0;
}