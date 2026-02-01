// Quetion
// Dynamic Memory Allocation
// ABC Pvt Ltd. manages employee records of other companies.
// Employee Id can be of any length and it can contain any character
// For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
// Then, you have to take employee id as an input and display it on screen.
// Store the employee id in a character array which is allocated dynamically.
// You have to create only one character array dynamically
// EXAMPLE:
// Employee 1:
// Enter no of characters in your eId
// 45
// Dynamically allocate the character array.
// take input from user

// Employee 2:
// Enter no of characters in your eId
// 4
// Dynamically allocate the character array.
// take input from user

// Employee 3:
// Enter no of characters in your eId
// 9
// Dynamically allocate the character array.
// take input from user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ABC Pvt Ltd. \n");
    printf("Manages employee records of other companies \n");

    printf("\n");

    char *name;
    char *id;
    int a, b;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the length of employee name : ");
        scanf("%d", &a);
        printf("\n");
        printf("Enter the length of employee id : ");
        scanf("%d", &b);
        printf("\n");

        name = (char *)malloc((a + 1) * sizeof(char));
        id = (char *)malloc((b + 1) * sizeof(char));

        printf("ENTER THE NAME : \n");
        scanf("%s", name);
        printf("ENTER THE ID : \n");
        scanf("%s", id);

        printf("\n");

        printf("YOUR ID NAME IS : %s\n", name);
        printf("YOUR ID IS : %s\n", id);

        free(id);

        printf("\n");
    }

    return 0;
}
