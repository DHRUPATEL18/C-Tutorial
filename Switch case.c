/*
   Switch case is use for reduce a code pf if else-if ladder 
   so that is a convenient way to make a programm.


   -->  rules
        1. Switch expression must be int or char
        2.Case Value must be in an integer or a charecter
        3.Case must be in inside
        4.Break in not mandatory but if you not use it so the next all case will came a ture
*/

#include <stdio.h>
int main()
{
        int std, per;

        printf("Give your standard\n");
        scanf("%d", &std);
        
        printf("Give your marks\n");
        scanf("%d", &per);
        
        switch (std)
        {
        case 10:
                printf("You are in 10th\n");
                switch (per) //That is a nested switch statement.
                {
                case 70:
                        printf("You are passed with good marks\n");
                        break; //That is satement used to eascaps next Statement/Case
                case 80:
                        printf("You are passed with very good marks\n");
                        break;        
                default:
                        printf("You are got above 90 percentage\n");
                        break;
                }
                break;
        case 11:
                printf("You are in 11th\n");
                switch (per)
                {
                case 70:
                        printf("You are passed with good marks\n");
                        break;
                case 80:
                        printf("You are passed with very good marks\n");   
                        break;     
                default:
                        printf("You are got above 90 percentage\n");
                        break;
                }
                break;
        case 12:
                printf("You are in 12th\n");
                switch (per)
                {
                case 70:
                        printf("You are passed with good marks\n");
                        break;
                case 80:
                        printf("You are passed with very good marks\n");
                        break;        
                default:
                        printf("You are got 90 percentage\n");
                        break;
                }
                break;
        default:
                printf("You are in college\n");
                switch (per)
                {
                case 70:
                        printf("7.0 CGPA\n");
                        break;
                case 80:
                        printf("8.0 CGPA\n");
                        break;        
                default:
                        printf("9.0 CGPA\n");
                        break;
                }
                break;
        }

   return 0;
}

