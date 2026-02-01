// do whlie loop is must be execute at one time
// The execution of statement(s) occurs at least once. After that, the checking of the condition occurs.
#include<stdio.h>
int main()
{
  int n, i = 0;
  
  printf("Enter a number\n");
  scanf("%d", &n);

  do
  {
    printf("%d\n", i);
    i = i + 1; // i++
  } while (i<=n);
  
   return 0;
}
