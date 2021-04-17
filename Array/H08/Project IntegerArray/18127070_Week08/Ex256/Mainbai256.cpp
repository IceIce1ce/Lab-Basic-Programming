#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex256.h"
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
void hv(int &a, int &b)
{
	int flag = a;
	a = b;
	b = flag;
}
void sapxepgiamdan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				hv(a[i], a[j]);
			}
		}
	}
}
void mainbai256()
{
	int n, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	sapxepgiamdan(a, n);
	printf("\nMang sau khi sap xep giam dan la: ");
	xuatmang(a, n);
	_getch();
}