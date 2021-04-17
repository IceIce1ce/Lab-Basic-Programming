#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex155.h"
#pragma warning(disable:4244)
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
void khoangcach(int a[], int n, int b[], int x)
{
	for (int i = 0; i < n; i++)
	{
		b[i] = abs(x - a[i]);
	}
}
float max(int b[], int n)
{
	int Max = b[0];
	for (int i = 1; i < n; i++)
	{
		if (b[i] > Max)
		{
			Max = b[i];
		}
	}
	return Max;
}
void ketqua(int a[], int b[], int n)
{
	printf("\nGia tri trong mang xa gia tri x nhat la: ");
	int Max = max(b, n);
	for (int i = 0; i < n; i++)
	{
		if (b[i] == Max)
		{
			printf("%d", a[i]); 
		}
	}
}
void mainbai155()
{
	int n;
	int a[1000], b[1000], x;
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nNhap gia tri x: ");
	scanf_s("%d", &x);
	khoangcach(a, n, b, x);
	printf("\nKhoang cach tu x = %d den cac phan tu trong mang la:\n", x);
	xuatmang(b, n);
	ketqua(a, b, n);
	_getch();
}