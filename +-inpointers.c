#include<stdio.h>
int sum(int *a, int *b)
{
   int ans = *a + *b;
   *b = *a - *b;
   *a = ans;
}
int main()
{
   int a = 4;
   int b = 3;

   sum(&a,&b);

   printf("ANS IS A + B = %d\n", a);
   printf("ANS IS A - B = %d\n", b);

   return 0;
}