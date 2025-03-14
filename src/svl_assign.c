#include "../include/svl_assign.h"

void svl_assign(svl_ptr svl, size_t index, value val, valueType type)
{
    if (index >= svl->size)
    {
        fprintf(stderr, "Index out of bounds\n");
        exit(1);
    }
    if (svl->types[index] != type)
    {
        fprintf(stderr, "Type mismatch\n");
        exit(1);
    }
    svl->data[index] = val;
}