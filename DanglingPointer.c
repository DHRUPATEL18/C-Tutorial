#include <stdlib.h>
#include <stdio.h>
int main()
{
    // <1>. Deallocation of a memory block
    
    int *ptr = (int *)malloc(7 * sizeof(int));

    ptr[0] = 18;
    ptr[1] = 19;
    ptr[2] = 70;
    ptr[3] = 75;

    free(ptr);  // Now it s a Dangling pointer 
    ptr = NULL; // now it is not a Dangling but a Null pointer

    // <2>. Function Returing local variable address

    int* FDP()
    {
        int a, b, c;
        a = 18;
        b = 81;
        c = a + b; 
    }

    int *ptr2 = FDP(); // Now it s a Dangling pointer 

    // <3>. If variable gose out of scope
    
    int *ptr3;
    {
        int a = 70;
        ptr3 = &a;
    }
    // Here variable gose out of scope, 
    // which means ptr3 is pointiong to a locartion  which is freed and hence ptr3 is dangling
    
    return 0;
}

/*
     - A pointer to a free memory location or tha location whose content has been deleted is called a danling pointer.
     - It is a rise during the object destruction when an object that has an incomimg reference is deleted or dellocated,
      without modifying the value of the pointer,
      so that the pointer still points to the memory location of the dellocated memory.

--> Causes of It
    - Dellocation of memory
    - Returning local varibales in a function
    - Variable going out of Scope

--> It is introduce bugs in your program
--> So that is not a good approch but you can slove to it, creating a null pointer.

*/