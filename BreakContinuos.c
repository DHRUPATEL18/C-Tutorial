//This are satement used in loop and switch case.
#include<stdio.h>
int main()
{
    printf("DHRU\n");

    int i, age;
    for ( i = 0; i < 10; i++)
    {
       printf("Enter your Age\n", age);
       scanf("%d", &age);
    //   if (age>10)
    //   {                 output 
    //     break;            if user give number, it is above 10 then this satement break this loop.
    //   }
       
       if (age>10)
       {
        continue;  // if condition is valid then it will miss all block of following  code of this block and then it will continuos with loop.
       }
       
       printf("1\n");
       printf("2\n");
       printf("3\n");


    }
    

    return 0;
}
