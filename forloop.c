/*  
    that is loop use to iterate the statement or a part fo the program several times.
    that is used to traverse the data structures like arry and lists.

 ---> syntax of for loop

      for(expression1;expression2;expression3)
      {
        here you can type some code
      }
  
  expression 1 => initialization of the loop variable (one or more than one in expression i)
  expression 2 => it is conditional expression (it is check specific condition to be satisfied)
                  it can have more than one condition.However, the loop is iterate untill the last condition become a flase
                  that is an optional(convert into infinite loop)
                  we can pass zero or non-zero value in expression 2(zero->flase otherwise ture)
  expression 3 => it is used to update the loop variable
                  it can update more than one variable at the same time
                  that is an optional

*/

#include<stdio.h>
int main()
{
    int i=0, j=0;
    
    for(/*i=0,j=0 it can type out of loop otherwise leave blank*/
        ;j=3,i<5 /*in this condition, tha last one would consider*/
        ;i++)
    {
       
        printf("%d %d\n", i, j);
        j++; // here you can only write 3rd expression 
        
    }
 
    
    return 0;
}

/* 
    for (i=0;i<5;i++)
    {
        printf("%d\n", i);   
    }

--> output 
    0
    1
    2
    3
    4
  */  