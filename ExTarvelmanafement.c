/* quetions is that -->
      You manage a travel agency and you want your n drivers to input their following details:
      1. Name
      2. Driving License No
      3. Route 
      4. Kms
      Your program should be able to take n = 3 as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

      Your program should print details of the drivers in a beautiful fashion.
      User structures.
*/


#include<stdio.h>
struct tarvel_agency
{
    char name[10];
    char Driving_lic[10];
    int Route;
    int Kms;
};

int main()
{
   struct tarvel_agency d[3];
   
   for (int i = 1; i <= 3; i++)
   {

    printf("ENTER A NAME : ");
    scanf("%s", d[i].name);
    
    printf("ENTER DRIVINH LICENSE NO : ");
    scanf("%s", d[i].Driving_lic);
    
    printf("ENTER TOTAL DISTANSE (Kms) : ");
    scanf("%d", &d[i].Kms);
    
    printf("ROUTE NO : ");
    scanf("%d", &d[i].Route);
    
    printf("\n-------------------------------------------------------------------------------\n");

    printf("HERE YOU CAN SEEN DRIVER NUMBER %d INFORMATIONS", i);

    printf("NAME IS %s\n", d[i].name);
    printf("DRIVING LICENSE NUM IS %s\n", d[i].Driving_lic);
    printf("TOTAL DISTANSE IS %d kms\n", d[i].Kms);
    
    if(d[i].Route == 1)
    {
        printf("SURAT TO BANGLOR\n");
    }
    else if(d[i].Route == 2)
    {
        printf("SURAT TO MUMBAI\n");
    }
    else
    {
        printf("SURAT TO ANY LOCAL SPOTE BUT IN SURAT\n");
    }
    printf("\n-------------------------------------------------------------------------------\n");
   }

    return 0;
}