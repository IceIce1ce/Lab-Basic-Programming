#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;

	printf("Nhap a, b: ");
	scanf_s("%d%d", &a, &b);

	int min = a;
	if (min < b)
	{
		min = a;
	}

	printf("Min is %d\n", min);

	_getch();
	return 0;
}