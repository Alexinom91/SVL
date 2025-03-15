#include "../include/svl.h"


int main()
{
    svl vector;
    svl_new(vector, INT);
    svl_assign(vector, 0, 20, INT);
    printf("%d\n", vector->data[0].i);
    getchar();

    return 0;
}