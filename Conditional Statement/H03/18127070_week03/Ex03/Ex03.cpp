#include<stdio.h>
#include<conio.h>

int main()
{
	float thuchanh, baitap, thilithuyet, S;
	printf("Nhap diem thuc hanh: ");
	scanf_s("%f", &thuchanh);
	printf("Nhap diem bai tap: ");
	scanf_s("%f", &baitap);
	printf("Nhap diem thi li thuyet: ");
	scanf_s("%f", &thilithuyet);
	printf("diem tong la: %0.2f\n", S = thuchanh * 0.3 + baitap * 0.3 + thilithuyet * 0.4);
	if (S >= 5)
		printf("passed");
	else printf("failed");
	_getch();
	return 0;
}