#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct array{
    struct array* self;
    int* data;
    size_t size;
    void (*pfnSet)(struct array*, size_t, int);
    int (*pfnGet)(struct array*, size_t);
}array_t;

int Get_array_t(array_t* self, size_t index){
    return self->data[index];
}

void Set_array_t(array_t* self, size_t index, int value){
    if(self == NULL) return;
    if(index >= 0 && index < self->size) {
        self->data[index] = value;
        // *((self->data)+index) = value;
    }
}

//Array constructors
array_t* make_array(size_t capacity){
    array_t* newArray = (array_t*)malloc(sizeof(array_t));

    newArray->self = newArray;
    newArray->data = (int*)malloc(sizeof(int) * capacity);  
    newArray->size = capacity;

    //setup methods
    newArray->pfnGet = Get_array_t;
    newArray->pfnSet = Set_array_t;

    return newArray;
}

//Array Destructor
//Sometimes abrreviated 'dtor'
void destroy_array(array_t* self){
    free(self->data);
    free(self);
}

int main(){
    array_t* test = make_array(10);

    for(int i=0; i<test->size; i++){
        // test->data[i] = i;
        test->pfnSet(test->self, i, i);
    }

    for(int i=0; i<test->size;i++){
        printf("%d\n",test->pfnGet(test, i));
    }

    destroy_array(test);
}