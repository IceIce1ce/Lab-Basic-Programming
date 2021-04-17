// ID: 18127070
// Name: Tran Dai Chi
// Ex10: tinh so nut bien so 
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("\n tinh so nut bien so xe");

	int n;
	int nut = 0;
	printf("\nNhap bien so xe: ");
	scanf_s("%d", &n);
	while (n > 0)
	{
		nut = nut + n % 10;
		n = n / 10;
	}
	printf("\nSo nut la: %d\n", nut % 10);
	_getch();
	return 0;
}