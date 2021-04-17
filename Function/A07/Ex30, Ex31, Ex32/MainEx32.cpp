#include<iostream>
#include<math.h>
#include"Ex32.h"
using namespace std;
void mainbai32()
{
	int n;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	if (sqrt(n)*sqrt(n) == n)
		printf("day la so chinh phuong");
	else
		printf("day khong phai la so chinh phuong");
	system("pause");
}