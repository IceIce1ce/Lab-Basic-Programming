// ID: 18127070
// Name: Tran Dai Chi
// Ex07: tinh chu vi va dien tich tam giac
#include <stdio.h> 
#include <math.h> 
int main()
{
	float a, b, c, S, p, chuvi;
	printf("Nhap a = ");
	scanf_s("%f", &a);

	printf("Nhap b = ");
	scanf_s("%f", &b);

	printf("Nhap c = ");
	scanf_s("%f", &c);

	chuvi = a + b + c;
	printf("chu vi = %0.2f\n", chuvi);

	p = chuvi / 2;

	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("dien tich = %0.2f", S);

	return 0;
}