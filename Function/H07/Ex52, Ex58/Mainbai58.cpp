#include<stdio.h>
#include<conio.h>
#include"Ex58.h"
void mainbai58()
{
	int n;
	do
	{
		printf("Nhap N: ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("N phai >= 0. Xin vui long nhap lai!");
		}
	} while (n < 0);
	printf("So %d gom toan cac chu so chan hay khong?\n", n);
	bool kiemtra = true;
	while (n /= 10)
	{
		if ((n % 10) % 2 == 1)
		{
			kiemtra = false;
			break;
		}
	}
	if (kiemtra == true)
	{
		printf("Phai");
	}
	else
	{
		printf("Khong phai");
	}
	_getch();
}