#include <stdio.h>   
#include <conio.h>
int main()
{
    int a, i, j, t, n, x; 
	printf("Nhap so dien thoai: ");
	scanf_s("%d", &n);
	i = 0; 
	a = n;
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	t = 0;
	while (a >= 1)
	{
		t = t * 10 + a % 10;
		a = a / 10;
	}
	printf("%d %d\n", t, i);
	for (j = 1, x = 0; j <= i; j++)
	{
		x = t % 10;
		switch (x)
		{
		case 0: printf("khong\t"); break;
		case 1: printf("Mot\t"); break;
		case 2: printf("Hai\t"); break;
		case 3: printf("Ba\t"); break;
		case 4: printf("Bon\t"); break;
		case 5: printf("Nam\t"); break;
		case 6: printf("Sau\t"); break;
		case 7: printf("Bay\t"); break;
		case 8: printf("Tam\t"); break;
		case 9: printf("Chin\t"); break;
		}
		t = t / 10;
	}
	_getch();
	return 0;
}

