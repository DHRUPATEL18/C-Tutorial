#include<stdio.h>
#include<string.h>
int main()
{
    char str1 [] = "DHRU";
    char str2 [] = "PAL";
    char str3 [10];
    printf("The strcmp for str1, str2 returned %d \n", strcmp(str1, str2));
    puts(strcat(str1, str2));
     
    printf("The length of str1 is %d\n", strlen(str1));
    printf("The length of str2 is %d\n", strlen(str2));
     
    printf("The reversed string s1 is: ");
    puts(strrev(str1));
    printf("The reversed string s2 is: ");
    puts(strrev(str2));
    
    
    strcpy(str3,strcat(str1,str2));
    puts(str3);

    return 0;
}