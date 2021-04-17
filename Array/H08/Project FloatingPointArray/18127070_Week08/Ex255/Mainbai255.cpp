#include<stdio.h>
#include<conio.h>
#include"Ex255.h"
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
void hv(float &a, float &b)
{
    float flag = a;
	a = b;
	b = flag;
}
void sapxeptangdan(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
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
void mainbai255()
{
	int n;
	float a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
    sapxeptangdan(a, n);
	printf("\nMang cac so thuc tang dan sau khi da sap xep la: ");
	xuatmang(a, n);
	_getch();
}