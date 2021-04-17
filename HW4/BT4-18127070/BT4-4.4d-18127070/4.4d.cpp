#include <stdio.h>
#include <conio.h>
int main()
{
	int ketqua, n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if (n < 0) 
		printf("nhap sai xin nhap lai");
	{
		ketqua = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int t = 1; t <= n; t++)
			{
				if (sqrt(t) == i)
					ketqua = ketqua + t;
				else continue;
			}
		}
		printf("S = %d\n", ketqua);
		_getch();
		return 0;
	}
}