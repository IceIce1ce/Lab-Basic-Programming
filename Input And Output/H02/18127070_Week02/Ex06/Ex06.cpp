// Id: 18127070
// Name: Tran Dai Chi
//Ex06: tinh tien phai tra
#include<stdio.h>

int main()
{
	int a, b, c, e, tienphaitrai;
	float d;
	printf("Nhap so luong san pham: ");
	scanf_s("%d", &a);
	printf("Nhap don gia san pham: ");
	scanf_s("%d", &b);
	c= a * b;
	d = 0.1 * c;
	e = c + d;
	printf("tienphaitra = %d\n", e);
	return 0;
}