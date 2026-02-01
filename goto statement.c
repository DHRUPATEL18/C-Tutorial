// it is called as jumped statement
//that statement is preferable when we need to break multiple loops using a single statement at the same time

#include<stdio.h>
int main()
{
    /*
    Start:
    printf("We are in Start\n");
    goto end;
    printf("DHRU\n");
    goto Start;

    end:
    printf("We are at the end\n");
    */

    int i,j;
    int num;
    for ( i = 0; i < 8; i++)
    {
        for ( j = 0; j < 8; j++)
        {
            printf("Enter a Number. enter 0 to exit\n");
            scanf("%d", &num);

            if(num==0)
            {
                printf("Exit\n");
                // break; if you use this then you break only one loop
                goto end; // that is use for outcome of Nasted loops 
            }
        }
   }
    end:
    return 0;
}