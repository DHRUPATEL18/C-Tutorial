#include<stdio.h>
int main()
{
    int input;
    float kmtomiles = 0.621371;
    float cmstoinches = 0.393701;
    float inchestometers = 0.0254;
    float inchestofoot = 0.0833333;
    float poundtokgs = 0.453592;

    float first;
    float second;

  while (1)
  {
        printf("Choose a Unit conversation pair that you want\n");
        printf("0.Exit a programn\n1.kmtomiles\n2.cmstoinches\n3.inchestometers\n4.inchestofoot\n5.poundtokgs\n");
        printf("Select option according to list :");
        scanf("%d", &input);

    switch (input)
    {
    case 0:
        printf("You are Exit to the program");
        goto end;
        break;
    case 1:
        printf("Enter  vluve of km :");
        scanf("%f", &first);
        second = first * kmtomiles;
        printf("%f kms = %f miles", first,second);
        goto end;
        break;
    case 2:
        printf("Enter  vluve of cm :");
        scanf("%f", &first);
        second = first * cmstoinches;
        printf("%f cms = %f inches", first,second);
        goto end;
        break;
    case 3:
        printf("Enter  vluve of inches :");
        scanf("%f", &first);
        second = first * inchestometers;
        printf("%f inches = %f meters", first,second);
        goto end;
        break;    
    case 4:
        printf("Enter  vluve of inches :");
        scanf("%f", &first);
        second = first * inchestofoot;
        printf("%f inches = %f foot", first,second);
        goto end;
        break;    
    case 5:
        printf("Enter  vluve of pound :");
        scanf("%f", &first);
        second = first * poundtokgs;
        printf("%f pound = %f kgs", first,second);
        goto end;
        break;
    default:
        printf("You are in default option");
        goto end;
        break;
    }

  }
    end:
    
    return 0;
}