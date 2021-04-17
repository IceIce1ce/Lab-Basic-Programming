#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex148.h"
void nhapmangmotchieu(int s[], int &n)
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
bool kiemtrasonguyento(int n)
{
	if (n < 2)
	{
		return false;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return false;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}
int songuyentocuoi(int s[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (kiemtrasonguyento(s[i]) == true)
		{
			return s[i]; 
		}
	}
	return -1; 
}
void mainbai148()
{
	int n, s[1000];
	nhapmangmotchieu(s, n);
	int timsonguyentocuoi = songuyentocuoi(s, n);
	printf("So nguyen to cuoi cung trong mang la: %d", timsonguyentocuoi); 
	_getch();
}