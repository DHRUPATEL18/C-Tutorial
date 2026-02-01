#include <stdio.h>
void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 5; i++)
    { 
        temp = arr[i]; 
        arr[i] = arr[9-i];
        arr[9-i] = temp;
    }
}
void arrayPrint(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf("BEFORE SWAPING OF ARRAY ELEMENTS :\n");
    arrayPrint(arr);

    arrayRev(arr);
    printf("\nAFTER SWAPING OF ARRAY ELEMENTS :\n");
    arrayPrint(arr);
    
    return 0;
}
