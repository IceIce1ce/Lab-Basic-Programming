#include<stdio.h>
#include<conio.h>
#include"8.2b.h"
void nhapmangsonguyen(int a[], int &n)
{
	printf("nhap so phan tu trong mang: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
}
int kiemtramangdoixung(int a[], int n)
{
	int k = 1;
	for (int i = 0; i < n / 2; i++)
	{
		if (a[i] != a[n - 1 - i]) k = 0;
	}
	return k;
}
void mainbai82b()
{
	int a[50], n;
	nhapmangsonguyen(a, n);
	if (kiemtramangdoixung(a, n) == 0) 
	printf("mang khong doi xung");
	else printf("mang doi xung");
	_getch();
}