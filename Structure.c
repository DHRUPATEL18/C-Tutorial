/* Structure
     That is store Diffrent diffrent type of data type.
     That is a user define data type.
     Which contains lots of diffrent type of information.
     Due to (.)dot operater you can declare structure members.

    Syntax of Structure -->

    [1]. DATA TYPE CREATE WITH USE
    structure structure_name
    {
        diffrent data type
    } structure_variables;

    [2]. DATA TYPE CREATE AFTER USE
    structure structure_name
    {
        diffrent data type
    };
    structure_variables;

*/

#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[6];
} DHRU, KRISH;
int main()
{
    DHRU.id = 1;
    KRISH.id = 2;
    DHRU.marks = 81;
    KRISH.marks = 78;
    DHRU.fav_char = 'V';
    KRISH.fav_char = 'M';

    strcpy(DHRU.name, "DHRU");
    strcpy(KRISH.name, "KRISH");


    printf("ABOUT ON %s : \nID CARD %d\nMarks %d\nFavourite character %c", DHRU.name, DHRU.id, DHRU.marks, DHRU.fav_char);
    printf("\n\n");
    printf("ABOUT ON %s : \nID CARD %d\nMarks %d\nFavourite character %c", KRISH.name,KRISH.id, KRISH.marks, KRISH.fav_char);

    return 0;
}