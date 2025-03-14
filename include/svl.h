#ifndef SVL_H
#define SVL_H
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

typedef enum
{
   
    INT,
    FLOAT,
    DOUBLE,
    STRING,
}valueType;
typedef union 
{   
    int i;
    double d;
    float f;
    char *s;
    /* data */
}value;

typedef struct {
    value *data;
    valueType *types;
    size_t size;
    size_t capacity;
}__svl_vector;


typedef __svl_vector svl[1];
typedef __svl_vector* svl_ptr;
typedef __svl_vector** svl_ptr_ptr;
#include "svl_new.h"
#endif // SVL_H