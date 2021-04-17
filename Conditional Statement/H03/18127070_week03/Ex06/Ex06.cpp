#include<stdio.h>
#include<conio.h>

int main()
{
	float A, B, C, D, F, diemtb;
	printf("Nhap diem trung binh: ");
	scanf_s("%f", &diemtb);
	if (8.5 <= diemtb && diemtb <= 10)
		printf("A");
	if (7.0 <= diemtb && diemtb <= 8.4)
		printf("B");
	if (5.5 <= diemtb && diemtb <= 6.9)
		printf("C");
	if (4.0 <= diemtb && diemtb <= 5.4)
		printf("D");
	if (diemtb < 4)
		printf("F");
	_getch();
	return 0;
}