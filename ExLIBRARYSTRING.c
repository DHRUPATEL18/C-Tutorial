#include<stdio.h>
#include<string.h>
int main()
{
    char str1[6];
    char str2[4];
    char str3[] = " IS A FRIEND OF ";
    
    printf("ENTER THE NAME : \n");
    gets(str1);
    printf("ENTER THE SECOND NAME : \n");
    gets(str2);

    puts(strcat(str1,strcat(str3,str2)));
    return 0;
}