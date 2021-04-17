#include<stdio.h>
#include<conio.h>
#include"Ex31.h"
void mainbai31()
{
	int i, n;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	if (n < 2)
		printf("Khong phai la so nguyen to", n);
	else if (n == 2)
		printf("La so nguyen to", n);
	else if (n % 2 == 0)
		printf("Khong phai la so nguyen to", n);
	else
	{
		for (i = 3; i <= n; i += 2)
		{
			if (n % i == 0)
				break;
		}
		if (i == n)
			printf("La so nguyen to", n);
		else
			printf("Khong phai la so nguyen to", n);
	}
	_getch();
}