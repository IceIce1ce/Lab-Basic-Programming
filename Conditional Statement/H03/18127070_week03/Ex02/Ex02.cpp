#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;

	printf("Nhap a, b: ");
	scanf_s("%d%d", &a, &b);

	int max = a;
	if (max < b)
	{
		max = b;
	}

	printf("Max is %d\n", max);

	_getch();
	return 0;
}