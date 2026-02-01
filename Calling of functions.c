/*
  Two type of parameters
    - Actual parameters = that you can seen in int main() function
    - Formal parameters = that you can seen in a user's define function, it is copy of actual parameters

  Two type to call a function
    - Call by value = Simple Method
     Original values are unchanged but only parameter are changed that's inside a function
    - Call by reference = It is a call by using of pointers 
     Address of the actual arguments are copied and then assigned to the corresponding  formal arguments
*/

#include<stdio.h>
void changValue(int *address)
{
  *address = 18;
}
int main()
{
int a = 7;
 
printf("THE VALUE OF INT IS %d.\n", a);
changValue(&a);
printf("NOW IT IS A %d.", a);
  
return 0;
}