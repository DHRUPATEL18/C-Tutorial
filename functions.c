// That is used for dievide a large c program into smaller pieces
// it can be used multiple times in main() function so that it is provide reusability and modularity to c program


//    Basic Syntax of function 
/*
    return_type function_name(data_type parameter 1,data_type parameter 2,...)
    {
       //code to be executed
    }
*/

/*
    type of functions
----> Without arguments and without return value.
----> Without arguments and with return value.
----> With arguments and without return value.
----> With arguments and with return value.
*/


#include <stdio.h>

int sum(int a, int b) // WITH AREGUMENT & WITH RETURN  
{                     
    return a + b;
}

void printstar(int n) // WITH AREGUMENT & WITHOUT RETURN 
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
    } 
}

int takeanum() // WITHOUT AREGUMENT & WITH RETURN
{
    int i;
    printf("Enter a num");
    scanf("%d",  &i);
    return i;
}

int nublist()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
    
}

int main()
{
   int a ,b ,c ,d;
   a = 10;
   b = 8;
   
    c = sum(a, b);
    printf("%d\n", c);

    printstar(4);

    d = takeanum();
    printf("That is your num %d\n", d);

    nublist();

   return 0;
}
