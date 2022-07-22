#include <stdio.h>
#include <stdbool.h>
#include "bits.h"

void pixels (){
    int Pixel = 0xFFAACC11;
    unsigned char r = (Pixel >> 24);
    unsigned char g = (Pixel >> 16);
    unsigned char b = (Pixel >> 8);
    unsigned char a = (Pixel >> 0);

    printf("r is: %d\n", r);
    printf("g is: %d\n", g);
    printf("b is: %d\n", b);
    printf("a is: %d\n", a);
}

void oddEven(int num){
    char r = num << (sizeof(num) - 1);
    if(r){
        printf("(Using Bitshift) The number %d is ODD\n", num);
    }else{
        printf("(Using Bitshift) The number %d is Even\n", num);
    }
}

void LeftBitShift(){
    printf("-------------- Left Bit shift -----------\n");
    int a = 1;
    for(int i=0; i<=5; i++){
        printf("The value of 1 left shifted by %d is %d\n", i, a << i);
    }
    printf("------------------------------\n");
}

void RightBitShift(){
    printf("-------------- Right Bit shift -----------\n");
    int a = 64;
    for(int i=0; i<=5; i++){
        printf("The value of 64 right shifted by %d is %d\n", i, a >> i);
    }
    printf("------------------------------\n");
}

//bitwise and 
//true only if both the values are true

//bitwise or
//true if any one of the item is true

//bitwise xor
//false if both the values are true

//for more - https://www.programiz.com/c-programming/bitwise-operators

bool bitwiseIsOdd(int num){
    if ((num & 1) == 1){
        return true;
    }
    return false;
}

void usingBitwiseOddEven(int num){
    if(bitwiseIsOdd(num)){
        printf("(Using Bitwise &) - %d is Odd \n", num);
    }else{
        printf("(Using Bitwise &) - %d is Even \n", num);
    }
}

int main(){
    StagesCompletedInt_t sci;
    StagesCompletedChar_t scc;
    StagesCompletedChar1_t scr;
    StagesCompletedChar0_t sco;

    printf("Sizeof structint is %ld\n", sizeof(sci));
    printf("Sizeof structChar is %ld\n", sizeof(scc));
    printf("Sizeof structChar1 is %ld\n", sizeof(scr));
    //One byte is minimum in C lang
    printf("Sizeof structChar1 is %ld\n", sizeof(sco));

    pixels();

    LeftBitShift();
    RightBitShift();

    oddEven(32);
    oddEven(31);

    usingBitwiseOddEven(42);
    usingBitwiseOddEven(41);
    return 0;
}