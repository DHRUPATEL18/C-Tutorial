// there are two types of method to define constants variable
//  1). constant keyword
//  2). #define preprocessor

#include<stdio.h>
// second method
#define PI 3.14
int main()
{
    const float b = 7.3333; // first method
    //  b = 7.2222; if i use tins so compiler give me error because of b is alraedy define in const b = 7.3333;

    printf("%f\n", b);
    printf("%f\n", PI);
    
     return 0;
}
