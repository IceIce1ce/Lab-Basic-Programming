#include <stdio.h>
#include <conio.h>
int songuyento(int N);
void mainbai1()
{
	int N, i;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &N);
	} while (N <= 0);
	printf("Cac so nguyen to <= N: ", N);
	for (i = 2; i <= N; i++)
	{
		if (songuyento(i))
			printf(" %d ", i);
	}
	_getch();
}
int songuyento(int N)
{
	int i;
	if (N == 1)
		return 1;
	else
	{
		for (i = 2; i < N; i++)
		{
			if (N % i == 0)
				return 0;
		}
		return 1;
	}
	_getch();
}