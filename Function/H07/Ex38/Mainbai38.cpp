#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex38.h"
void mainbai38()
{
	int i, n;
	float S;
	do
	{
		printf("Nhap n: ");
		scanf_s("%d", &n);
		if (n < 1)
		{
			printf("n phai >= 1. Xin vui long nhap lai!");
		}
	} while (n < 1);
	i = 1;
	S = pow(1.0, 1.0 / 2);
	while (i <= n)
	{
		S = pow((i + S) * 1.0, 1.0 / (i + 1));
		i++;
	}
	printf("Tong la: %0.2f", S);
	_getch();
}