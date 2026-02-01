//it is a collection of data items of the same type.
//it can be also store the collection of derived data type such as pointers, structures , etc..
//code that use array is sometimes more organized and readable.

// advantages -->
// it is used to represent multiple data itmes of same type by using only single name.
// very fast

//disadvantages -->
//poor time complexity of insertion and deletion operation.
//Wastage of memory since arrays are fixed in size.
//if there is enough space present in the memory but now in contiguous form, you will not be able initialize your array.
//it is not possible to increase the size of the array, once you have declared the array.

//properties -->
//data in an array is stored in contiguous memory locations.
//each elements of array is of same size
//any elements of the array with given index can be accessed very quickly by using its address which can be calculate using the base address and the index.


//systex
/*
    Data_type name[size];
    Data_type name[size] = {x, y, z,....};  size is not required in this case!
    Data_type name[row][columms]; it is 2D array
    Use can initialize the array one by one
      - name[0] = 0;

*/

#include<stdio.h>
int main()
{
    int marks[4];  //  ___ ___[] = {x, y, z}; if you want not use scanf function 

    for (int i = 0; i < 4; i++)
    {
        printf("Enter is %d elements of array :\n", i);
        scanf("%d", &marks[i]);
    }
    
    for (int i = 0; i < 4; i++)
    {
         printf("%d\t", marks[i]);
    }
    
//   int marks[4];

//   marks[0] = 18;
//   printf("marks is %d\n", marks[0]); output is marks is 18

 //   marks[0] = 07;
 //   marks[1] = 45;
 //   marks[2] = 18;
 //   marks[3] = 10;

 //   printf("marks is %d\n", marks[0]); output is marks is 07 
 //   printf("marks is %d\n", marks[1]);           marks is 45
 //   printf("marks is %d\n", marks[2]);           marks is 18
 //   printf("marks is %d\n", marks[3]);           marks is 10

    return 0;
}



























