/*
    types of statement
    1.if
    2.if else
    3.if else-if ladder
    4.Nested if

    syntax :-

    if(conditon)
    {
        code
    }
*/
#include <stdio.h>
int main()
{
    int age;

   printf("Enter your age\n");
   scanf("%d", &age);
   printf("you have enter %d as your age\n", age);
   
   
   if(age>=18) // that is a if statement, always to be use two symbol.
   {
    printf("you are eligible for vote!");
   }
   else if(age>=10) // that is a if else-if ladder
   {
    printf("your are teenager so you cannot do give vote to anyone\n");
   }
   else // that is mandatory so you can run programm without else satement
   {
    printf("you are not eligible for vote\n");
   }

   return 0;
}
