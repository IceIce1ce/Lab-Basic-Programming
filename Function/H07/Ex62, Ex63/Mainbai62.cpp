#include<stdio.h>
#include<conio.h>
#include"Ex62.h"
void mainbai62()
{
	int a, b;
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
	if (A % B == 0)
	{
		printf("uoc so chung lon nhat = %d", B);
	}
	else
	{
		for (int i = B / 2; i >= 1; i--)
		{
			if (B % i == 0 && A % i == 0)
			{
				printf("uoc so chung lon nhat = %d", i);
				break;
			}
		}
	}
	_getch();
}