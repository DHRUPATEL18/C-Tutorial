/* 
    Union 
     -> That is used to create memory management program.
     -> That is very similar to structure, this is a single shared memory locations is equal to the size of its largest data member.
    
*/
#include <stdio.h>
#include <string.h>
union student // Union has same syntax as like as structure.
{
    int id;             // size 4 byte
    int marks;          // size 4 byte
    char fav_char;      // size 1 byte
    char name[6];       // size 6 byte
} DHRU;                 // here,  total memory cache is 6 byte but if you use structure so that the total size of it is 15 byte.
int main()
{
    DHRU.id = 1;
    DHRU.marks = 81;
    DHRU.fav_char = 'V';
    strcpy(DHRU.name, "DHRU");  // last data type is condsider to here divied a storge cache so uper one data type give garbage(corrput) value in program
    
    printf("ABOUT ON %s : \nID CARD %d\nMarks %d\nFavourite character %c", DHRU.name, DHRU.id, DHRU.marks, DHRU.fav_char);
    
    return 0;
}