#include<stdio.h>
#include<conio.h>
#include"Ex219.h"
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
int solanxuathien(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	}
	return dem;
}
void mainbai219()
{
	int n, x, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nNhap gia tri x: ");
	scanf_s("%d", &x);
	int solanxuathiengiatriX = solanxuathien(a, n, x);
	printf("\nSo lan xuat hien cua gia tri x trong mang la: %d", solanxuathiengiatriX);
	_getch();
}