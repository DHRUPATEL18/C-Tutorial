#include<stdio.h>
int fun(int b) 
// Formal perameters ,that is different to int b in main function due to the scope of it is must be in their functions
{
    printf("The address of b is inside the function : %d\n", &b);
    return b + 72;
}
int main()
{
    int b =  18; // Local variable
   
    printf("The address of b is inside the main : %d\n", &b);

    printf("%d\n", fun(b));

    return 0;
}