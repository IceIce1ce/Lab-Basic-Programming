#include<stdio.h>
#include<conio.h>
#include"Ex131.h"
void xuatmangmotchieu(int s[], int &n)
{
	do
	{
		printf("Nhap so phan tu cua mang: "); 
		scanf_s("%d", &n);
		if (n <= 0 || n > 1000)
		{
			printf("Khong hop le!\n");
		}
	} while (n <= 0 || n > 1000);
	for (int i = 0; i < n; i++)
	{
		printf("s[%d]: ", i); 
		scanf_s("%d", &s[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%4d", s[i]); 
	}
}
void mainbai131()
{
	int n, s[1000];
	xuatmangmotchieu(s, n);
	_getch();
}