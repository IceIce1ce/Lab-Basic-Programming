#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex211.h"
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
int kiemtrasonguyento(int n)
{
	if (n < 2)
	{
		return 0;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return 0;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}
float tbcongnguyento(int a[], int n)
{
	int sum = 0;
	float dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (kiemtrasonguyento(a[i]) == 1)
		{
			sum += a[i];
			dem++;
		}
	}
	if (dem == 0)
	{
		printf("\nMang khong co so nguyen to");
		return 0;
	}
	return sum / dem;
}
void mainbai211()
{
	int n, a[1000];
	nhapmang(a, n);
	xuatmang(a, n);
	float tbnguyento = tbcongnguyento(a, n);
	printf("\nTrung binh cong cac so nguyen to trong mang la: %0.2f", tbnguyento);
	_getch();
}