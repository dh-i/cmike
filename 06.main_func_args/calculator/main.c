#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

long calculate(int left, int right, char op){
    switch (op){
    case '+':
        return left + right;
        break;
    case '-':
        return left - right;
    case 'x':
        return left * right;
    case '/':
        return left/right;
    default:
        return left;
    }
}

int isOperator(char ch){
    if(ch == '+'|| ch == '-' || ch == 'x' || ch == '/'){
        return 1;
    }
    return 0;
}

int main(int argc, char** argv){
    long result = 0;
    for(int i=1; i<argc; i++){
       if(isdigit(*argv[i])){
            result += strtol(argv[i],NULL,10);
       }else{
            if(isOperator(*argv[i])){
                result = calculate(result, strtol(argv[i+1], NULL, 10), *argv[i]);
                i++;
            }else{
                printf("\nNote: Do not use * , it might yield incorrect result. Use 'x' for multiplication.\nExample : gcc main.c -o prog && ./prog 2 + 3 + 2 + 8 - 1 x 100 / 10\n\n");
                printf("Invalid argument \n\n");
                return 0;
            }

            //The buggy approach
            //long nextnum = strtol(argv[i+1], NULL, 10);
            // long newresult = calculate(result, nextnum, *argv[i]);
            // if((newresult == result) && (nextnum != 0)){
            //     printf("Invalid argument\n\n");
            //     return 0;
            // }
            // result = newresult;
            // i++;
       }  
    }
    printf("The total is %ld\n", result);
    return 0;
}
