#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h>
#include"Ex83.h"
void mainbai83()
{
	int dem = 0, dem1 = 0, dem2 = 0;
	printf("1. R\n");
	printf("2. S\n");
	printf("3. P\n");
	int player1, player2;
	printf("Player 1 choose (1-3): ");
	scanf_s("%d", &player1);
	printf("Player 2 choose (1-3): ");
	scanf_s("%d", &player2);
	if (player1 == 1)
	{
		if (player2 == 3)
		{
			printf("Player 2 win\n");
			dem2++;
			dem++;
		}
		else if (player2 == 2)
		{
			printf("Player 1 win\n");
			dem1++;
			dem++;
		}
		else
		{
			printf("Result is draw\n");
			dem++;
		}
	}
	else if (player1 == 2)
	{
		if (player2 == 3)
		{
			printf("Player 1 win\n");
			dem1++;
			dem++;
		}
		else if (player2 == 1)
		{
			printf("Player 2 win\n");
			dem2++;
			dem++;
		}
		else
		{
			printf("Result is draw\n");
			dem++;
		}
	}
	else if (player1 == 3)
	{
		if (player2 == 1)
		{
			printf("Player 1 win\n");
			dem1++;
			dem++;
		}
		else if (player2 == 2)
		{
			printf("Player 2 win\n");
			dem2++;
			dem++;
		}
		else
		{
			printf("Result is draw\n");
			dem++;
		}
	}
	printf("Total games player 1 have won : %d\n", dem1);
	printf("Total games player 2 have won: %d\n", dem2);
	printf("Total games player 1 and player 2 have played: %d\n", dem);
}
void game()
{
		while (100)
		{
			system("cls");
			mainbai83();
			int option;
			printf("Do you want to play again?\n");
			printf("1. Yes\n");
			printf("2. No\n");
			scanf_s("%d", &option);
			if (option == 2)
			{
				break;
			}
		}
	_getch();
}