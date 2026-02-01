#include<stdio.h>
int main()
{
    // It has no data type associated with it.
    // It can be easily typecasted sot any pointer type.
    // General purpose pointer variable.


    // malloc and calloc have return (void *) type pointer.
    // pointer arithmetic is not allowed.

    // you cannot dereference of void pointer.

    int a = 18;
    float b = 7.74;

    void *p;
    p = &a;

    float C = 18.100;

    void *VK;
    VK = &C;

    
    printf("The value of c is %f but it is in float data type", *((float*)VK));
    
    printf("The value of a is %d", *((int*)p)); // Without use of typecasting you cannot  use void pointer.
    printf("\n");

    return 0;
}