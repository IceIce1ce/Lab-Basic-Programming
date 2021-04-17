#include <stdio.h>
#include <conio.h>
#include<math.h>
void mainbai75()
{
	int n;
	double s;
	printf("Nhap so nguyen 4 byte: ");
	scanf_s("%d", &n);
	s = log10((int)n) / log10(2);
	if (s == (int)s)
		printf("day la so nguyen 4 byte co dang 2^k\n");
	else
		printf("day la so nguyen 4 byte khong co dang 2^k\n");
	_getch();
}