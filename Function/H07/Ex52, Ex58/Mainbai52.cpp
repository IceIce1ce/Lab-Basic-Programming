#include<stdio.h>
#include<conio.h>
#include"Ex52.h"
void mainbai52()
{
	int n, T;
	printf("Nhap n:");
	scanf_s("%d", &n);
	int min = n % 10;
	while (n > 0)
	{
		T = n % 10;
		if (T < min)
		{
			min = T;
		}
		n = n / 10;
	}
	printf("so nho nhat cua so nguyen duong n la: %d", min);
	_getch();
}