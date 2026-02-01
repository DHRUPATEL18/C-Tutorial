// Syntax of it
// (type) Value;

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 18;
    float b = 18.71;
    printf("That is a Value of %f\n", b);
    printf("That is a Value of %d\n", (int) b); 

    // float c = 54/5; out put is 10.000000 
    float c = (float) 54/5;
    printf("Sum of this que is %f", c);

    return 0;
}
