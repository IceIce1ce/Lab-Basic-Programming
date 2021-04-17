#include<stdio.h>
#include<conio.h>
#include"Ex161.h"
void mangmotchieu(int s[], int &n)
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
		printf("s[%d]: ", i); 
		scanf_s("%d", &s[i]);
	}
}
int giatridautientrongkhoang(int s[], int n, int x, int y)
{
	int i, dem = 0;
	for (i = 0; i < n; i++)
	{
		if (s[i] > x && s[i] < y)
		{
			dem++;
			break;
		}
	}
	if (dem == 0)
	{
		return x;
	}
	return s[i];
}
void mainbai161()
{
	int n, x, y, s[1000];
	printf("Nhap x: "); 
	scanf_s("%d", &x);
	printf("Nhap y: "); 
	scanf_s("%d", &y);
	mangmotchieu(s, n);
	int giatridautien = giatridautientrongkhoang(s, n, x, y);
	printf("Gia tri dau tien trong khoang (%d, %d) la: %d", x, y, giatridautien); 
	_getch();
}