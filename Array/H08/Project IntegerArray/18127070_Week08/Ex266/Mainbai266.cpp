#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex266.h"
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
void themphantu(int a[], int &n, int vt, int pt)
{
	for (int i = n; i > vt; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = pt;
	n++;
}
void mainbai266()
{
	int n, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	int vt, pt;
	do
	{
		printf("\nNhap vi tri can them (%d --> %d) ", 0, n);
		scanf_s("%d", &vt);
		if (vt < 0 || vt > n)
		{
			printf("\nKhong hop le!");
		}
	} while (vt < 0 || vt > n);
	printf("\nNhap phan tu can them: ");
	scanf_s("%d", &pt);
	themphantu(a, n, vt, pt);
	printf("\n");
	xuatmang(a, n);
	_getch();
}