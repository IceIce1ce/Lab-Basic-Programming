#include<stdio.h>
#include<conio.h>
#include"Ex233.h"
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
int kiemtragiatritrung(int a[], int n, int vt)
{
	for (int i = vt - 1; i >= 0; i--)
	{
		if (a[i] == a[vt])
		{
			return 0;
		}
	}
	return 1;
}
int soluonggiatribitrung(int a[], int n, int vt)
{
	int dem = 1;
	for (int i = vt + 1; i < n; i++)
	{
		if (a[i] == a[vt])
		{
			dem++;
		}
	}
	return dem;
}
void tansuatxuathien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int kiemtratrung = kiemtragiatritrung(a, n, i);
		if (kiemtratrung == 1)
		{
			int dem = soluonggiatribitrung(a, n, i);
			printf("\nGia tri %d xuat hien %d lan", a[i], dem);
		}
	}
}
void mainbai233()
{
	int n, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	tansuatxuathien(a, n);
	_getch();
}