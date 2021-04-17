#include<stdio.h>
#include<conio.h>
#include"Ex80.h"
void mainbai80()
{
	double a, b, x;
	int solveLinear(double a, double b, double &x);
	printf("Nhap so a: ");
	scanf_s("%lf", &a);
	printf("Nhap so b: ");
	scanf_s("%lf", &b);
	printf("ax+b = 0\n");
	if (a == 0)
	{
		if (b == 0)
			printf("phuong trinh co vo so nghiem");
		else
			printf("phuong trinh vo nghiem");
	}
	else
		printf("phuong trinh co mot nghiem la x = %0.2lf",1.0 * (-b / a));
	_getch();
}