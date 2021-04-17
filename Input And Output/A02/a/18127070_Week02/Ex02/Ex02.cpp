// ID: 18127070
// Name: Tran Dai Chi
// Ex02: cong, tru, nhan, chia hai so nguyen

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a, b, sum, sub, mul;
	double div;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);


	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = 1.0 * a / b;

	printf("%d + %d = %d\n", a, b, sum);
	printf("%d - %d = %d\n", a, b, sub);
	printf("%d * %d = %d\n", a, b, mul);
	printf("%d / %d = %0.3lf\n", a, b, div);
	getch();
}

