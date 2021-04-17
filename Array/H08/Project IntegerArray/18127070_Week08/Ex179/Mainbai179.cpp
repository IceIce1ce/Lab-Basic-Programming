#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex179.h"
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
void lietke(int a[], int n)
{
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > abs(a[i + 1]))
		{
			temp = 1;
			printf("%8d", a[i]);
		}
	}
	if (temp == 0)
		printf("Mang ko ton tai gia tri do");
}
void mainbai179()
{
	int n, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nCac gia tri trong mang thoa dieu kien lon hon tri tuyet doi cua gia tri dung lien sau no la: \n");
	lietke(a, n);
	_getch();
}
