#include<stdio.h>
#include<conio.h>
#include"Ex134.h"
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
float timgiatrilonnhat(float a[], int n)
{
	float ln = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > ln)
		{
			ln = a[i];
		}
	}
	return ln;
}
void mainbai134()
{
	int n;
	float a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	float ln = timgiatrilonnhat(a, n);
	printf("\nGia tri lon nhat trong mang mot chieu cac so thuc la: %0.2f", ln);
	_getch();
}