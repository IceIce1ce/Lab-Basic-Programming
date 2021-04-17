#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex258.h"
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
void hv(int &a, int &b)
{
	int flag = a;
	a = b;
	b = flag;
}
void nguyentotangdan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (kiemtrasonguyento(a[i]) == 1)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (kiemtrasonguyento(a[j]) == 1 && a[i] > a[j])
				{
					hv(a[i], a[j]);
				}
			}
		}
	}
}
void mainbai258()
{
	int n, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	nguyentotangdan(a, n);
	printf("\nCac so nguyen to tang dan trong mang sau khi sap xep la: ");
	xuatmang(a, n);
	_getch();
}