// ID: 18127070
// Name: Tran Dai Chi
//Ex03: tinh sin, cos, tan, cot
#include<stdio.h>
#include<math.h>

#define PI 3.14159265

int main()
{
	float a, b, c, d, T;
	printf("Nhap goc: ");
	scanf_s("%f", &T);
	a = sin(T * PI / 180);
	b = cos(T * PI / 180);
	c = a / b;
	d = b / a;
	printf("sin %f  = %0.2lf\n", T, a);
	printf("cos %f  = %0.2lf\n", T, b);
	printf("tan %f  = %0.2lf\n", T, c);
	printf("cot %f  = %0.2lf\n", T, d);
	return 0;
}