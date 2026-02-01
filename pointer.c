#include<stdio.h>
int main()
{
    printf("Let,s learn about pointer \n");
    printf("\n");
    
    int a = 18;
    int *ptr = &a;

    printf("a     %%d     %d\n", a);
    printf("*ptr  %%d     %d\n", *ptr); 
    printf("&a    %%d     %d\n", &a);  
    printf("ptr   %%d     %d\n", ptr);
    printf("ptr   %%x     %x\n", ptr);
    printf("ptr   %%p     %p\n", ptr); 
    printf("*ptr  %%x     %x\n", *ptr);
    printf("*ptr  %%p     %p\n", *ptr);
    printf("&ptr  %%x     %x\n", &ptr);  
    printf("&ptr  %%p     %p\n", &ptr);
    

    return 0;
}
