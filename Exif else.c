/*
   your quetion

   - make a programm useing of if else-if ladder satement 
     there are two type of test attendant by student 
     if he was passed it any one test so he will receive 15rs
     or if he was passed both test so he will receive 45rs
     otherwise fail.

*/

#include <stdio.h>
int main()
{
  int maths, science;
  printf("Enter your mathematics marks =\n");
  scanf("%d", &maths);

  printf("Enter your science marks =\n");
  scanf("%d", &science);

  if(maths>=33&&science>=33) // here i can use && logical so that i can slove to this que
  {
    printf("you will get 45rs because of pass both of test\n");
  }
  else if(maths>=33)
  {
    printf("you will get 15rs because of pass maths exam\n");
  }
  else if(science>=33)
  {
    printf("you will get 15rs because of pass science exam\n");
  }
  else
  {
    printf("BETTER LUCK, YOU WILL SEEN FOR NEXT EXAM");
  }
  
   return 0;
}