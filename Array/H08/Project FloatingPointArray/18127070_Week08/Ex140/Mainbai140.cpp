#include<stdio.h>
#include<conio.h>
#include"Ex140.h"
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
void xuatmang(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%4.2f\n", a[i]);
	}
}
float duongnn(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			return a[i];
		}
	}
	return -1;
}
float timduongnhonhat(float a[], int n)
{
	float duongnhonhat = duongnn(a, n);
	if (duongnhonhat == -1)
		return -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] < duongnhonhat)
		{
			duongnhonhat = a[i];
		}
	}
	return duongnhonhat;
}
void mainbai140()
{
	int n;
	float a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	float duongmin = timduongnhonhat(a, n);
	printf("\nGia tri duong nho nhat trong mang mot chieu cac so thuc la: %0.2f", duongmin);
	_getch();
}