/*
  Two type of allocate memory
   
   
   1> Stack -- Static Memory
   2> Heap  -- Dynamic Memory

   - Statically Allocation variable or arry has a fixed size in memory.
   - We have learnt to create big enough arrsy to fit in our inputs but this dosen't seems like an optimal way to allocate memory.

   - Dynamic memory Allocation is a way to include the size of data structure can be changed during the runtime.


   difference 

   [1].Static Memory Allocation 
    
    Allocation is done before the program's execution
    There is no memory reusability and the memory allocation cannot be free
    less effcient

   [2].Dynamic Memory Allocation
    
    Allocation is dione during the program's execution
    There is memory reusability and the memory allocation can be free when not required
    More effcinet


   --> Memory Allocation in four segments
       -Code                                   [TEXT SEGMENT]
       -Static / Global Variable               [DATA SEGMENT AND BSS SEGMENT]
       -Stack                                  [STATIC MEMORY ALLOCATION]            WORKING IN LIFO
       -Heap                                   [DYNAMIC MEMORY ALLOCATION]           

   --> Memory Layout in C
    
    Initially some memory will be  reserved for main() in the stack,This is also called  as the stack frame of main()

   --> Stack overflow
    
    Complier allocatione some space for the stack part of the memory
    When the the space is exhasted for some bad reason, the situation is called  as stack overflow
    EX.. in recursion with wrong/on base condition

   --> Use of Heap

    We can  create a pointer in our mian function ans point to a memory block of heap.
    The address is stored by the local variabl in the main function.
    The memory consumed will not get free atuomatically in case overwrite the pointer.
*/ 


#include<stdio.h>
int main()
{
    
    return 0;
}