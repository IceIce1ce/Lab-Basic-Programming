#include<stdio.h>
#include<conio.h>
#include"Ex17.h"
void mainbai17()
{
	int i, n;
	float x, S, T;
	long A;
	printf("Nhap x: ");
	scanf_s("%f", &x);
	do
	{
		printf("Nhap n: ");
		scanf_s("%d", &n);
		if (n < 1)
		{
			printf("N phai >= 1. Xin vui long nhap lai!");
		}
	} while (n < 1);
	S = 0;
	T = 1;
	A = 1;
	i = 1;
	while (i <= n)
	{
		T = T * x;
		A = A * i;
		S = S + T / A;
		i++;
	}
	printf("Tong la: %0.2f", S);
	_getch();
}