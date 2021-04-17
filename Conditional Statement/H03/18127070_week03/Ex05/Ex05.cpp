#include<stdio.h>
#include<conio.h>

int main()
{
	float diemtb;
	printf("nhap diem trung binh: ");
	scanf_s("%f", &diemtb);
	if (9 <= diemtb && diemtb <= 10)
		printf("hoc luc xuat sac");
	if (8 <= diemtb && diemtb < 9)
		printf("hoc luc gioi");
	if (7 <= diemtb && diemtb < 8)
		printf("hoc luc kha");
	if (6 <= diemtb && diemtb < 7)
		printf("hoc luc trung binh kha");
	if (5 <= diemtb && diemtb < 6)
		printf("hoc luc trung binh");
	if (4 <= diemtb && diemtb < 5)
		printf("hoc luc yeu");
	if (diemtb < 4)
		printf("hoc luc kem");
	_getch();
	return 0;
}