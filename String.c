#include<stdio.h>
void string(char str[])
{
    for (int i = 0; str[i]!='\0'; i++)
    {
        printf("%c", str[i]);
    }
}
int main()
{
    // 1st type 
    // char str[] = {'D','H','R','U','','I','S','','G','O','O','D','','B','O','Y','\0'};
    // 2sec type
    char str1[] = "DHRU IS GOOD BOY"; 
    string(str1);

    char str2[30];
    printf("\n");
    printf("ENTER THE WORD, THAT YOU WANNA PRINT IN TWO WAY :");
    gets(str2);
    printf("USING OG PUTS :");
    puts(str2);
    printf("USING OF PRINTF FUNCTION : %s", str2);
    
    return 0;
}

    // char str[4] = "DHRU";
    //printf("%c", str);
    //output is 
    // DHRUN  --> Here, N is a Garbage value because of no Space to store Null Character
