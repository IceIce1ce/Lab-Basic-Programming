#include<stdio.h>
#include<conio.h>
#include"8.2c.h"
void mainbai82c()
{
	int a[50], n, i, dem, j, t;
	printf("Nhap so phan tu cua mang : ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i + 1);
		scanf_s("%d", &a[i]);
	}
	t = a[1] - a[0];
	dem = 0;
	for (j = 1; j < n; j++)
	{
		if (a[j] != (a[0] + j * t))
		{
			dem++; 
			break;
		}
	}
	if (dem == 0)
	{
		printf("mang da cho lap thanh 1 cap so cong voi cong sai la: %d", t);
	}
	else
	{
		printf("ko lap thanh mot cap so cong");
	}
	_getch();
}