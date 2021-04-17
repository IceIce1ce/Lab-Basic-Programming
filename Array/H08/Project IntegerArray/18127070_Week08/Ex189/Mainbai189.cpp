#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex189.h"
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
int songuyendautienle(int n)
{
	int t;
	while (n >= 10)   
	{
		t = n % 10;
		n = n / 10;
	}
	if (n % 2 == 0)
		return 0;
	return 1;
}
int lietke(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (songuyendautienle(a[i]) == 1)
		{
			printf("%8d", a[i]);
		}
	}
	return 0;
}
void mainbai189()
{
	int n, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nCac so nguyen co chu so dau tien la chu so le la: ");
	lietke(a, n);
	_getch();
}