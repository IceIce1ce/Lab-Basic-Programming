// ID: 18127070
// Name: Tran Dai Chi
// Ex09: tinh y1 va y2 theo cong thuc
#include<stdio.h>
#include<math.h>

#define PI 3.14159265
#define e 2.71828182

int main()
{
	float x;
	printf("Nhap x: ");
	scanf_s("%f", &x);
	float y1;
	y1 = 4*(x*x+10*x*sqrt(x)+3*x+1);
	printf("y1 = %0.2lf\n", y1);
	
	float y2;
	y2 = (sin(PI*x*x)+sqrt(x*x+1))/(pow(e,2*x)+cos((PI/4)*x));
	printf("y2 = %0.2lf\n", y2);
	return 0;
}