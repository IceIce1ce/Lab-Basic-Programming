#include<stdio.h>

int main()
{
	int h1, m1, s1, h2, m2, s2, T1, T2, khoangcach;
	printf("Nhap thoi diem T1\n");
	scanf_s("%d%d%d", &h1, &m1, &s1);
	printf("Nhap thoi diem T2\n");
	scanf_s("%d%d%d", &h2, &m2, &s2);
	T1 = h1 * 3600 + m1 * 60 + s1;
	T2 = h2 * 3600 + m2 * 60 + s2;
	khoangcach = T2 - T1;
	printf("khoang cach giua hai thoi diem: %d\n", khoangcach);
	return 0;
}