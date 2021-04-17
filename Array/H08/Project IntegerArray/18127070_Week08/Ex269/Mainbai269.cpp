#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex269.h"
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
void hv(int &a, int &b)
{
	int flag = a;
	a = b;
	b = flag;
}
void sapxeptangdan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				hv(a[i], a[j]);
			}
		}
	}
}
void themXvaomang(int a[], int &n, int x)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		if (x < a[i])
		{
			int flag = x;
			for (j = n; j > i; j--)
			{
				a[j] = a[j - 1];
			}
			a[i] = flag;
			break;
		}
	}
	n++;
}
void mainbai269()
{
	int n, a[1000], pt;
	nhapmang(a, n);
	xuatmang(a, n);
	sapxeptangdan(a, n);
	printf("\nNhap phan tu can them: ");
	scanf_s("%d", &pt);
	themXvaomang(a, n, pt);
	printf("\n");
	xuatmang(a, n);
	_getch();
}