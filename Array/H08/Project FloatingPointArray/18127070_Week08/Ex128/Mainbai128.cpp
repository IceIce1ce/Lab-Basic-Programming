#include<stdio.h>
#include<conio.h>
#include"Ex128.h"
void nhapmang(float a[], int &n)
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
		scanf_s("%f", &a[i]);
	}
}
void mainbai128()
{
	int n;
	float a[1000];
	nhapmang(a, n);
	_getch();
}