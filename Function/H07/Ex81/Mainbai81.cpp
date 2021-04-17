#include<stdio.h>
#include<math.h>
#include<conio.h>
#include"Ex81.h"
void mainbai81()
{
	double a, b, c, delta, x1, x2;
	int solveQuadratic(double a, double b, double c, double &x1, double &x2);
	printf("ax^2+bx+c=0\n");
	printf("Nhap a: ");
	scanf_s("%lf", &a);
	printf("Nhap b: ");
	scanf_s("%lf", &b);
	printf("Nhap c: ");
	scanf_s("%lf", &c);
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
				printf("phuong trinh co vo so nghiem");
			else
				printf("phuong trinh co vo nghiem!");
		}
		else
		{
			x1 = 1.0 * (-c / b);
			printf("phuong trinh co mot nghiem: %0.2lf", x1);
		}
	}
	else
	{
		delta = b * b - 4 * a * c;
		if (delta < 0)
			printf("phuong trinh vo nghiem!");
		if (delta == 0)
		{
			x1 = 1.0 * (-b / (2 * a));
			printf("phuong trinh co nghiem kep: %0.2lf", x1);
		}
		if (delta > 0)
		{
			x1 = 1.0 * ((-b + sqrt(delta)) / (2 * a));
			x2 = 1.0 * ((-b - sqrt(delta)) / (2 * a));
			printf("phuong trinh co hai nghiem phan biet\n");
			printf("x1 = %0.2lf\n", x1);
			printf("x2 = %0.2lf\n", x2);
		}
	}
	_getch();
}