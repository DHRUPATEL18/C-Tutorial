#include <stdio.h>
#include <string.h>

typedef struct student_infio
{
    int id, marks;
    char name[7];
}std; // name of struct student_info that is changed by std using of typedef 

int main ()
{
    std DHRU;
    DHRU.id = 18;
    DHRU.marks = 81;
    
    strcpy(DHRU.name, "DHRU");
    
    printf("FIRST EXAMPLE OF TYPEDEF , YOU CAN CHANGE THE NAME OF STRUCTURE \n\n");
    
    printf("ABOUT ON %s\n", DHRU.name);
    printf("ID NO : %d\n", DHRU.id);
    printf("MARKS : %d\n", DHRU.marks);
    
    printf("\n\n");
    
    printf("SECOND EXAMPLE OF TYPEDEF , YOU CAN CHANGE int* to ip DATA TYPE \n\n");
    
    typedef int *ip; // here you can replace int* to ip by using of typedef
    ip a, b;
    int c = 18;
    a = &c;
    b = &c;

    printf ("%d\n", *a);
    printf ("%d\n", *b);
    printf ("%p\n", &a);
    printf ("%p\n", &b);
 
  return 0;
}
