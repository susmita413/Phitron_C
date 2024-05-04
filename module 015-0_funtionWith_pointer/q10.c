#include <stdio.h>
int main()
{

    int ary[4] = {1, 2, 3, 4};

    int *p;

    p = ary + 3;

    *p = 5;

    printf("%d\n", ary[3]); //5

}
/*
Pointer p is assigned the address of the element at index 3 of the array ary (ary + 3), 
which points to the fourth element of the array.
The value at the memory location pointed to by p is then changed to 5 
using the dereference operator (*p = 5;).
After this operation, the array ary becomes {1, 2, 3, 5}.
*/