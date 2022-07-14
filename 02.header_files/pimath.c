#include "pimath.h"

void Add(vector_t* out, const vector_t* in){
    out->mag = out->mag + in->mag;
    out->dir = out->dir + in->dir;
}