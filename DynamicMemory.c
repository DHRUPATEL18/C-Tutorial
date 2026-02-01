/*
    HEADER FILE IS =  #include<stdlib.h>

    --> Function of Dynamic memroy allocation
        1. malloc()
           ptr = (ptr-type*) malloc(size_in_bytes)

        2. calloc()
           ptr = (ptr-type*) calloc(n,size_in_bytes)

        3. realloc()
            ptr = (ptr-type*) realloc(ptr,new_size_in_bytes)   
        
        4. free()
            free(ptr) 

    Note: We are using the sizeof() function here because the size of int may differ in different systems, 
          so to be on the safe side

    --> There are fucntion is used to menage memroy

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;

    printf("Enter the size of array that you want : ");
    scanf("%d", &n);
    printf("\n");
    
    
    // Use of malloc()
    int* ptr;
    ptr = (int *) malloc(n*sizeof(int)); // Typecasted coz of void pointer return value

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE YOUR %d NUMBER : ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("YOUR %d NUMBER IS %d\n", i,ptr[i]);
    }

    printf("\n");

    // Use of calloc() 
    int* ptr1;
    ptr1 = (int *) calloc(n,sizeof(int)); // Typecasted coz of void pointer return value

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE YOUR %d NUMBER : ", i);
        scanf("%d", &ptr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("YOUR %d NUMBER IS %d\n", i,ptr1[i]);
    }

    printf("\n");

    // Use of realloc()
    ptr1 = (int *) realloc(ptr1, n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE YOUR %d NUMBER : ", i);
        scanf("%d", &ptr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("YOUR %d NUMBER IS %d\n", i,ptr1[i]);
    }

    // Use of free()
    free(ptr1);
    // That use to free up memory in Heap and clean data.

    return 0;
}