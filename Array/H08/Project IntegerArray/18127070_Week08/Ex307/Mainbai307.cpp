#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex307.h"
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
void taomangbchuagiatriletumanga(int a[], int n)
{
	int b[1000], dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			b[dem] = a[i];
			dem++;
		}
	}
	xuatmang(b, dem);
}
void mainbai307()
{
	int n, m, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nMang b chua gia tri le tu mang a: ");
	taomangbchuagiatriletumanga(a, n);
	_getch();
}