#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex271.h"
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
void mainbai271()
{
	int n, a[1000];
	int vt;
	nhapmang(a, n);
	xuatmang(a, n);
	do 
	{
		printf("\nNhap vi tri can xoa: ");
		scanf_s("%d", &vt);
		if (vt < 0 || vt >= n)
		{
			printf("\nKhong hop le!");
		}
	} while (vt < 0 || vt >= n);
	xoaphantu(a, n, vt);
	printf("\n", vt);
	xuatmang(a, n);
	_getch();
}