//The C programming language allows any of its functions to call itself multiple times in a program. 
//Here, any function that happens to call itself again and again (directly or indirectly), 
//    unless the program satisfies some specific condition/subtask is called a recursive function.
#include<stdio.h>
int factorial(int number)
{
	if (number == 1 || number == 0)
	{
		return 1;
	}
	else
	{
		return number*factorial(number-1);	
	}
}

int main()
{
	int num;
	printf("Enter a number you want that factorial :");
	scanf("%d", &num);
	printf("\nThe factorial of %d is %d", num, factorial(num));

	return 0;
}
