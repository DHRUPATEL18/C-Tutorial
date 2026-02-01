//It first needs to check the condition, and only then can we execute the statement(s).

#include<stdio.h>
int main()
{
    int n;
    int i = 0;
    scanf("%d", &n);
    printf("Your entered num is %d\n", n);
    
    while (i<n)
    {
        printf("%d\n", i);
        i = i + 1;
    }
    
    
    return 0;
}
