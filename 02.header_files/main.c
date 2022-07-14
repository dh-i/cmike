#include <stdio.h>
#include "pimath.h"

int main(){
    vector_t first;
    vector_t second;

    first.mag = 2.0f;
    first.dir = 5.0f;

    second.mag = 4.0f;
    second.dir = 3.0f;

    Add(&first, &second);
    printf("The value of first mag = %.2f\n", first.mag);
    printf("The value of first dir = %.2f\n", first.dir);

    printf("The value of second mag = %.2f\n", second.mag);
    printf("The value of second dir = %.2f\n", second.dir);
    return 0;
}