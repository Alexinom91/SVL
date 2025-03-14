#include "../include/svl.h"

int main()
{
    svl vector;
    value val;
    val.i = 10;
    svl_new(vector, INT);
    svl_assign(vector, 0, val, INT);
}