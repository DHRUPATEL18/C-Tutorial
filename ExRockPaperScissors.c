#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int conspt(char player[10], char computer[10])
{
	if (player == computer)
	{
		printf("Round is Draw !!");
		return -1;
	}
	else if (player == "rock" && computer == "paper")
	{
		printf("you lose !!");
		return 0;
	}
	else if (player == "paper" && computer == "scissors")
	{
		printf("you lose !!");
		return 0;
	}
	else if (player == "scissors" && computer == "rock")
	{
		printf("you lose !!");
		return 0;
	}
	else if (player == "scissors" && computer == "paper")
	{
		printf("you win!!");
		return 1;
	}
	else if (player == "rock" && computer == "scissors")
	{
		printf("you win !!");
		return 1;
	}
	else if (player == "paper" && computer == "rock")
	{
		printf("you win !!");
		return 1;
	}
	
	
}

int GRN()
{
	srand(time(NULL));
	return rand() % 100;
}

int main()
{

	printf(" 1.Rock \n 2.Paper \n 3.Scissors \n\n");
	
    printf("Computer Roll : ");

	int n = GRN();
    char computer[10];
	if (n < 33)
	{
		printf("rock\n");
		computer == "rock";
	}
	else if (n > 33 && n < 66)
	{
		printf("paper\n");
		computer == "paper";
	}
	else
	{
		printf("scissors\n");
		computer == "scissors";
	}

	char player[10];
    
	printf("Your Roll : ");
	gets(player);

	printf("That is : %s V/s %s", player,computer);
	int result;

	result = conspt(player, computer);

	if (result == -1)
	{
		printf("Game Draw!\n");
	}
	else if (result == 1)
	{
		printf("Wow! You have won the game!\n");
	}
	else
	{
		printf("Oh! You have lost the game!\n");
	}

	return 0;
}