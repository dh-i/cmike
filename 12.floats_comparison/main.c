#include <stdio.h>
#include <math.h>

int main(){

    double num1 = 0.000001;
    double num2 = 1.0 - .999999;

    printf("%.18f\n", num1);
    printf("%.18f\n", num2);

    //this doesn't work as the precison after 6 digits is not guaranteed to be equal
    if(num1 == num2){
        printf("Both the numbers are equal\n");
    }

    //so the workaround, unless we are sending a spaceship to moon is 
    if(fabs(num1 - num2) < 0.00001f){
        printf("These numbers are equal\n");
    }

    return 0;
}