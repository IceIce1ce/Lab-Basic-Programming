#include <stdio.h>
#include <conio.h>
int main()
{
	int n, dau, i;
	float ketqua;
	printf("nhap so nguyen duong N: ");
	scanf("%d", &n);
	ketqua = 1;
	dau = -1;
	i = 1;
	for (; (i <= n); i++)
	{
		ketqua = ketqua + dau * (1.0 /(2*i +1));
		dau = dau * -1;
	}
	ketqua = 4 * ketqua;
	printf("Pi = %0.1f ", ketqua);
	_getch();
	return 0;
}