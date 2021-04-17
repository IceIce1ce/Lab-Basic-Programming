#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex203.h"
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
int sohangchuc(int n)
{
	n = abs(n);
	n = n / 10;
	int hangchuc = n % 10;
	if (hangchuc == 5)
	{
		return 1;
	}
	return 0;
}
int tongsohangchuc(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (sohangchuc(a[i]) == 1)
		{
			sum += a[i];
		}
	}
	return sum;
}
void mainbai203()
{
	int n, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	int tongchuc = tongsohangchuc(a, n);
	printf("\nTong cac chu so co chu so hang chuc la 5 la: %d", tongchuc);
	_getch();
}