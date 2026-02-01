//if we use it then it will be slove by size of quntity.

#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr  = arr;

    printf("Value at position 2  of array is  %d\n", arr[2]);
    printf("Value at position 2  of array is  %d\n", *(arr + 2));
    printf("\n\n");
    
    printf("THE ADDRESS OF FRIST  ELEMENT OF THE ARRAY IS %d\n", &arr[0]);
    printf("THE ADDRESS OF FRIST  ELEMENT OF THE ARRAY IS %d\n", arr);    
    printf("THE ADDRESS OF SECOND ELEMENT OF THE ARRAY IS %d\n", &arr[1]);
    printf("THE ADDRESS OF SECOND ELEMENT OF THE ARRAY IS %d\n", arr + 1);
    printf("THE ADDRESS OF THIRD  ELEMENT OF THE ARRAY IS %d\n", &arr[2]);
    printf("THE ADDRESS OF THIRD  ELEMENT OF THE ARRAY IS %d\n", arr + 2);
    printf("\n\n");

    printf("THE VALUE AT ADDRESS OF FIRST  ELEMENT OF THE ARRAY IS %d\n", *(arr));
    printf("THE VALUE AT ADDRESS OF FIRST  ELEMENT OF THE ARRAY IS %d\n", arr[0]);
    printf("THE VALUE AT ADDRESS OF FIRST  ELEMENT OF THE ARRAY IS %d\n", *(&arr[0]));
    printf("THE VALUE AT ADDRESS OF SECOND ELEMENT OF THE ARRAY IS %d\n", *(arr + 1));
    printf("THE VALUE AT ADDRESS OF SECOND ELEMENT OF THE ARRAY IS %d\n", arr[1]);  
    printf("THE VALUE AT ADDRESS OF SECOND ELEMENT OF THE ARRAY IS %d\n", *(&arr[1]));


    return 0;
}

/*
    int a = 18;
    int *ptr = &a;

    printf("%d\n", ptr);
    printf("%d\n", ptr+1);
    printf("%p\n", ptr);
    printf("%p\n", ptr+1);

    output -->

    6422036
    6422040
    000000000061FE14
    000000000061FE18   
*/