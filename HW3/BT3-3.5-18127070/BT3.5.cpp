#include<stdio.h>
#include<math.h>

int main()

{
	float p, q, x;
	printf("Nhap p: ");
	scanf_s("%f", &p);
	printf("Nhap q: ");
	scanf_s("%f", &q);
	printf("x^3+px^2+q=0\n");
	x = pow(sqrt((p*p*p*p*p*p) / 27 + (q*q) / 4) - q / 2, 1.0 / 3) - pow(sqrt((p*p*p*p*p*p) / 27 + (q*q) / 4) + q / 2, 1.0 / 3);
	printf("nghiem x: %0.6f", x);
	return 0;
}