#include<stdio.h>
int main()
{
    // It has a value reserved for indicating that the pointer or reference does not refer to a valid object.
    // Dereferencing a Null Pointer is undefine behavior in C.

    // It is give a functionality to C programmer to check whether a pointer is Legitimate or not
    // It is point to NULL (nothing)
    // It is use to handling error when we perform to using of pointer
    // To pass a null pointer to a funcation argument when we donot want to pass any valid memory address

    // NULL pointer is a Vlaue then Void pointer is a type

    int a = 18;
    int *p = NULL; // NULL pointer
     
    if(p != NULL)
    {
        printf("The Value of a is %d", *p);
    }
    else
    {
        printf("The pointer is NULL pointer so that it cannot be dereference !!");    
    }

    return 0;
}