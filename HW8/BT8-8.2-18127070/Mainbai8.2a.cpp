#include<stdio.h>
#include<conio.h>
#include"8.2a.h"
void nhapmang(int a[], int &n)
{
	printf("Nhap so phan tu trong mang: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
}
int kiemtramangtangdan(int a[], int n)
{
	int k = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (k == 3)
			return 3;
		if (k != 1 && a[i] < a[i + 1])
			k = k + 1;
		if (k != 2 && a[i] > a[i + 1])
			k = k + 2;
	}
	return k;
}
void mainbai82a()
{
	int a[50], n = 0;
	nhapmang(a, n);
	int check = kiemtramangtangdan(a, n);
	if (check == 1)
		printf("Mang tang dan\n");
	else if (check == 3)
		printf("Mang giam dan\n");
	_getch();
}