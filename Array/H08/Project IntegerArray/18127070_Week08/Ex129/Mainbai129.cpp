#include<stdio.h>
#include<conio.h>
#include"Ex129.h"
void nhapmangmotchieu(int s[], int &n)
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
}
void mainbai129()
{
	int n, s[1000];
	nhapmangmotchieu(s, n);
	_getch();
}