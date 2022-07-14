#ifndef PIMATH_H
#define PIMATH_H

typedef struct vector
{
    float mag;
    float dir;
} vector_t;

void Add(vector_t* out,const vector_t* in);

#endif

