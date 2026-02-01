#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    ptr = (int *) calloc(3, sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("ENTER THE MATHS MARKS : ");
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("NUMBER IS : %d\n", ptr[i]);
    }

    free(ptr);

    ptr = (int *) calloc(3, sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("ENTER THE SECNICE MARKS : ");
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("NUMBER IS : %d\n", ptr[i]);
    }

    return 0;
}