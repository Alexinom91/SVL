#include "../include/svl_new.h"

void svl_new(svl_ptr svl, valueType type)
{
    svl->data = (value*)malloc(sizeof(value));
    svl->types = (valueType*)malloc(sizeof(valueType));
    svl->size = 0;
    svl->capacity = 1;
    svl->types[0] = type;
}