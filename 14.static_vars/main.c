#include <stdio.h>

//to see the objs in binary c file we can use objdump 
//objdump -t ./prog

int function(){
    //the value and the var exists even after the function returns
    static int ABC = 0;
    static int s_i = 0;
    s_i++;

    printf("s_i : %d\n", s_i);
    return 0;
}

int main(){

   for(int i=0; i<10; i++){
        function();
   } 

    return 0;
}