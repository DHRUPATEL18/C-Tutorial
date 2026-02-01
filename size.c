#include <stdio.h>
int main()
{
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
    return 0;
}

//that is programm inform the size of keywords such as int, float, char.., arcorrding to system architecture bulit (32bit / 64bit).