#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, x;
	printf("Nhap so a: ");
	scanf_s("%f", &a);
	printf("Nhap so b: ");
	scanf_s("%f", &b);
	printf("x = ax+b\n");
	if (a == 0)
	{
		if (b == 0)
			printf("phuong trinh co vo so nghiem");
		else
			printf("phuong trinh vo nghiem");
	}
	else
		printf("phuong trinh co mot la x = %0.2f", -b / a);
	_getch();
	return 0;
}