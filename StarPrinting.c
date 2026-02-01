#include<stdio.h>
int main()
{ 
  
  while (1)
  {
    int number;

    printf("CHOOSE THE NUMBER :-\n  \t\t <1> TO PRINT TRIANGAL\n  \t\t <2> TO PRINT REVERSED TRIANGAL \n");
    printf("THAT IS A NUMNER YOU WANT TOO : ");
    scanf("%d", &number);

    printf("\n");
    
    printf("HERE YOU CAN SEEN A TRIANGE OF OPTION %d :\n" , number);

    if (number == 1)
    {
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (number == 2)
    {
        for (int i = 4; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }        
    }
    else
    {
        printf("PLESE YOU CHOOSE A NUMBER 1 OR 2 OTHER WISE YOU CANNOT PRINT STAR PATTRNS\n");
    }

  }
    
    return 0;
}