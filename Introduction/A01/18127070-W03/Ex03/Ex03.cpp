// ID: 18127070
// Name: Tran Dai Chi
// Ex03: Divide 2 numbers

#include<stdio.h>

int main()
{
	int num1, num2;
	double answer;
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	printf("Enter 2nd number: ");
	scanf("%d", &num2);

	answer = 1.0 * num1 / num2;

	printf("%d + %d = %0.3lf\n", num1, num2, answer);
	return 0;
}