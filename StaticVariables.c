#include <stdio.h>

int b = 7; // GLOBAL VARIABLE , if the same name of local and global variable so the first priority is local variable
// Here program cannot print b = 7 due to the name of local variable is b

int ret() // Only for consept built
{
    return 18*3;
}

int func1(int b1) // FORMAL PERAMETERS
{

    // static int myvar = ret(); if you use it than computer will be trow error
 
    static int var = 18;
    printf("The value of myvar is %d\n", var);
    var++;

}

int main()
{
    int b = 72; // LOCAL VARIABLE
    
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    
    return 0;
}



