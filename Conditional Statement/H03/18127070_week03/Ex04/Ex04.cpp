#include<stdio.h>
#include<conio.h>

int main()
{
	float thuchanh, baitap, thilithuyet, diemtong;

	printf("Nhap diem thuc hanh: ");
	scanf_s("%f", &thuchanh);
	printf("Nhap diem bai tap: ");
	scanf_s("%f", &baitap);
	printf("Nhap diem thi li thuyet: ");
	scanf_s("%f", &thilithuyet);

	thuchanh *= 0.3; 
	baitap *= 0.3;
	thilithuyet *= 0.4;

	printf("diem tong la: %0.2f\n", diemtong = thuchanh + baitap + thilithuyet);

	int copy;
	printf("Sinh vien nay co copy hay khong, nhap 0 la khong co, nhap cac so con lai la co copy: ");
	scanf_s("%d", &copy);

	if (diemtong < 5)
	{
		printf("failed");
	}
	else
	{
		if (thuchanh == 0 || baitap == 0 || thilithuyet == 0 || copy != 0)
		{
			printf("failed");
		}
		else
		{
			printf("passed");
		}
	}
_getch();
return 0;
}