#include<stdio.h>
#include<conio.h>

int main()
{
	int songuyen;
	printf("Nhap so nguyen bat ki: ");
	scanf_s("%d", &songuyen);
	if (songuyen == 0)
		printf("khong\n");
	if (songuyen == 1)
		printf("mot\n");
	if (songuyen == 2)
		printf("hai\n");
	if (songuyen == 3)
		printf("ba\n");
	if (songuyen == 4)
		printf("bon\n");
	if (songuyen == 5)
		printf("nam\n");
	if (songuyen == 6)
		printf("sau\n");
	if (songuyen == 7)
		printf("bay\n");
	if (songuyen == 8)
		printf("tam\n");
	if (songuyen == 9)
		printf("chin\n");
	if (0<songuyen&&songuyen>9)
		printf("ko doc duoc");
	_getch();
	return 0;
}