#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex277.h"
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
		printf("%4d", a[i]);
	}
}
void xoaphantu(int a[], int &n, int vt)
{
	for (int i = vt; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
int kiemtrasonguyento(int n)
{
	if (n < 2)
	{
		return 0;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return 0;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}
void xoasonguyento(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemtrasonguyento(a[i]) == 1)
		{
			xoaphantu(a, n, i);
			i--;
		}
	}
}
void mainbai277()
{
	int n, a[1000], vt;
	nhapmang(a, n);
	xuatmang(a, n);
	xoasonguyento(a, n);
	printf("\nMang sau khi xoa so nguyen to la: ");
	xuatmang(a, n);
	_getch();
}