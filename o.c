#include <stdio.h>
int main()
{
  
  int a = 10; //simple assignment operater
  int b = 3;
    
   // printf(" a += %d\n", a +=1); //add ADD assignment operater        ----> ans = 11
   // printf(" b -= %d\n", b -=1); //subtract ADD assignment operater   ----> ans = 2


    printf(" a *= %d\n", a *=2); //multiply ADD assignment operater
    printf(" a /= %d\n", a /=2); //divide ADD assignment operater


    // logical operater
    printf(" a || b = %d\n", a||b); // check any one vluve is ture or not then if that is ture then it is show 1
    printf(" a && b = %d\n", a&&b); // check both vluve are ture or not so that is show 1 but but are not true or any one is flase so that is give 0
    printf("! b = %d\n", !b);       // check value and if that is ture then it is give o otherwise give 1
    printf("! a = %d\n", !a);
    
    // bitwise operater working onn bits...
    printf("a & b = %d\n", a&b); // first of all given vluve is converted into bit then check and agin bits is convert to number and that is our output
    printf("a | b = %d\n", a|b);
    printf("a ^ b = %d\n", a^b);

    return 0;
}