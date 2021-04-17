#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex248.h"
void nhapmang(int a[], int &n)
{
	do
	{
		printf("Nhap so phan tu cua mang: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > 1000)
		{
			printf("Khong hop le!");
		}
	} while (n <= 0 || n > 1000);
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%8d", a[i]);
	}
}
int kiemtratangdan(int a[], int n)
{
	int temp = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			temp = 0;
			break;
		}
	}
	return temp;
}
void mainbai248()
{
	int n, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	int temp = kiemtratangdan(a, n);
	if (temp == 1)
	{
		printf("\nMang tang dan");
	}
	else
	{
		printf("\nMang khong tang dan");
	}
	_getch();
}