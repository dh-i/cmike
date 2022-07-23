#include <stdio.h>

typedef struct{
    float x,y,z,w;
}vec4_t;

//only one type will be allocated memory and the one which is bigger in size
typedef union {
    float elements[16];
    vec4_t rows[4];
}matrix_t;

int main(){
    printf("The size of matrix_t is %ld\n", sizeof(matrix_t));
    printf("The size of vec4_t is %ld\n", sizeof(vec4_t));

    matrix_t matrix4x4;

    for(int i=0; i<16; i++){
        matrix4x4.elements[i] = i+8;
    }

    printf("The value of matrix4x4 in row1 and position is %f\n", matrix4x4.rows[0].x);
    printf("The value of matrix4x4 in row1 and position is %f\n", matrix4x4.rows[0].y);
    printf("The value of matrix4x4 in row1 and position is %f\n", matrix4x4.rows[0].z);
    printf("The value of matrix4x4 in row1 and position is %f\n", matrix4x4.rows[0].w);
    return 0;
}
