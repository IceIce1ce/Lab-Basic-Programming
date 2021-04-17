#include <stdio.h>
#include <conio.h>
int main()
{
	int n, dau, i;
	float ketqua;
	printf("Nhap so nguyen duong N: ");
	scanf("%d", &n);
	ketqua = 0;
	dau = 1;
	i = 1;
	if (n < 0) 
		printf("Nhap sai xin nhap lai\n");
	else 
	{
		while (i <= n)
		{
			ketqua = ketqua + dau * (1.0 / i);
			dau = dau * -1;
			i = i + 1;
		}
		printf("ln(%d) = %0.1f ", n, ketqua);
	}
	_getch();
	return 0;
}