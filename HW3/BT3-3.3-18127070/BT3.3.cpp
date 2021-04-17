#include<stdio.h>

int main()
{
	float doC, doF, doK;
	printf("Nhap do C: ");
	scanf_s("%f", &doC);
	doF = doC * 1.8 + 32;
	doK = doC + 273;
	printf("doF=%0.1f\n", doF);
	printf("doK=%0.1f\n", doK);
	return 0;
}