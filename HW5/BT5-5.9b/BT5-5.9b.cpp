#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	do
	{
		printf("Nhap N > 0: ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("Khong hop le, xin vui long nhap lai!\n");
		}
	} 
	while (n <= 0);
	int a = (int)log10((float)n) + 1;
	int b = 0;
	int c = n;
	while (c != 0)
	{
		int t = c % 10; 
		c /= 10; 
		b+= t * pow(10.0, --a);
	}
	if (b == n)
	{
		printf("Cac chu so doi xung\n");
	}
	else
	{
		printf("Cac chu so khong doi xung\n");
	}
	_getch();
	return 0;
}