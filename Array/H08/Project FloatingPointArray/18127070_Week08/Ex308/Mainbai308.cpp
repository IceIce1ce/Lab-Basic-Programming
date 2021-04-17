#include<stdio.h>
#include<conio.h>
#include"Ex308.h"
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
void taomangbchuagiatriamtumangA(int a[], int n)
{
	int b[1000], dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			b[dem] = a[i];
			dem++;
		}
	}
	xuatmang(b, dem);
}
void mainbai308()
{
	int n, m, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\n");
	taomangbchuagiatriamtumangA(a, n);
	_getch();
}