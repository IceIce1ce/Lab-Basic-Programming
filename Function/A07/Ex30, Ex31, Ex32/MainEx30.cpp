#include<stdio.h>
#include<conio.h>
#include"Ex30.h"
void mainbai30()
{
	int i, n;
	long S;
	do
	{
		printf("Nhap n: ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("N phai > 0. Xin vui long nhap lai!");
		}
	} while (n <= 0);
	i = 1;
	S = 0;
	while (i < n)
	{
		if (n % i == 0)
		{
			S = S + i;
		}
		i++;
	}
	if (S == n)
		printf("La so hoan thien", n);
	else
		printf("Khong la so hoan thien");
	_getch();
}