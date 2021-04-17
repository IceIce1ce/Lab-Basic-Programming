#include<stdio.h>
#include<conio.h>
int main()
{
	long n, t, a = 0;
	printf("Nhap N: ");
	scanf_s("%d", &n);
	t = n;
	while (t >= 10)
	{
		int dvi = t % 10;
		t = t / 10;
		if (dvi < (t % 10))
		{
			a = 1;
		}
		else
		{
			a = 0;
			break;
		}
	}
	if (a == 1) 
		printf("Cac chu so co giam dan tu hang don vi\n");
	else printf("Cac chu so khong giam dan tu hang don vi\n");
	_getch();
	return 0;
}