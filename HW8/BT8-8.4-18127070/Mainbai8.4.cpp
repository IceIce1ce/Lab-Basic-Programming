#include <stdio.h>
#include <string.h>
#include<conio.h>
#include"8.4.h"
int s[1000][1];
void mainbai84()
{
	char chuoikitu[1000];
	printf("Nhap vao chuoi ky tu S: ");
	gets_s(chuoikitu);
	int max = 0;
	for (int i = 0; i < strlen(chuoikitu); i++)
	{
		s[(int)chuoikitu[i]][0]++;
		if (max < s[(int)chuoikitu[i]][0])
		{
		max = s[(int)chuoikitu[i]][0];
		}
	}
	for (int i = 0; i < 1000; i++)
	{
		if (s[i][0] == max)
		{
			printf("%c: %i\n", i, max);
		}
	}
	_getch();
}