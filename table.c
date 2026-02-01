//   two type of method to complete it is.
//   1. simple 2.loop


//  #include<stdio.h>
//  int main()
//  {   
//   int a;

//   printf("enter the number you want to multiplication table\n");
//   scanf("%d", &a);

 /*   printf("%d x 1 = %d\n", a,a*1);
      printf("%d x 2 = %d\n", a,a*2);
      printf("%d x 3 = %d\n", a,a*3);
      printf("%d x 4 = %d\n", a,a*4);
      printf("%d x 5 = %d\n", a,a*5);
      printf("%d x 6 = %d\n", a,a*6);
      printf("%d x 7 = %d\n", a,a*7);
      printf("%d x 8 = %d\n", a,a*8);
      printf("%d x 9 = %d\n", a,a*9);
      printf("%d x 10 = %d\n", a,a*10); 
*/
// that is compeleted by 1st one

// it is loop and smart method
#include <stdio.h>

int main()
{
    int i,j;
    
    printf("Enter your number that you want a table\n");
    scanf("%d", &j);
    
    for ( i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", i,j,i*j);
    } 

    /* 
       int i = 1, j;
    
       printf("Enter your number that you want a table\n");
       scanf("%d", &j);
    
       while(i<=10)
       {
        printf("%d * %d = %d\n", i,j,i*j);
        i++;
       }
    */ 
   // You can alos use do()while loop

    return 0;
}


