// ID: 18127070
// Name: Tran Dai Chi
// Ex02: Add 2 numbers

#include<stdio.h>

int main()
{
	int num1, num2, answer;
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	printf("Enter 2nd number: ");
	scanf("%d", &num2);

	answer = num1 + num2;

	printf("%d + %d = %d\n", num1, num2, answer);
	return 0;
}