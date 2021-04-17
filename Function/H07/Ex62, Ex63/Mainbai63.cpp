#include<stdio.h>
#include<conio.h>
#include"Ex63.h"
int mainbai63()
{
	int a, b, i;
	do 
	{
		printf("Nhap so nguyen duong a: ");
		scanf_s("%4d", &a);
		if (a < 0)
		{
			printf("Gia tri nhap vao khong hop le!");
		}
	} while (a < 0);
	do 
	{
		printf("Nhap so nguyen duong b: ");
		scanf_s("%4d", &b);
		if (b < 0)
		{
			printf("Gia tri nhap vao khong hop le!");
		}
	} while (b < 0);
	int A = a > b ? a : b;
	int B = a < b ? a : b;
	if (a == b)
		return a;
	else
	{
		for (i = A; i < a * b; i++)
			if (i % a == 0 && i % b == 0)
			{
				return i;
				break;
			}
	}
	printf("Boi chung nho nhat la: %d", i);
	_getch();
}