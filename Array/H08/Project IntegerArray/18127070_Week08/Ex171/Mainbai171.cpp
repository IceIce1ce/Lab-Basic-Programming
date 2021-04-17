#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Ex171.h"
void mangmotchieu(int s[], int &n)
{
	do
	{
		printf("Nhap so phan tu cua mang: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > 1000)
		{
			printf("Khong hop le!");
		}
	} while (n <= 0 || n > 1000);
	for (int i = 0; i < n; i++)
	{
		printf("s[%d]: ", i); 
		scanf_s("%d", &s[i]);
	}
}
int uocchung(int s[], int n)
{
	int t = s[0];
	for (int i = 1; i < n; i++)
	{
		if (s[i] < t)
		{
			t = s[i];
		}
	}
	return t;
}
bool kiemtralonnhat(int s[], int n, int uocso)
{
	for (int i = 0; i < n; i++)
	{
		if (s[i] % uocso != 0)
		{
			return false;
		}
	}
	return true;
}
int uocchunglonnhatcuamang(int s[], int n)
{
	for (int uoc = uocchung(s, n); uoc >= 1; uoc--)
	{
		if (kiemtralonnhat(s, n, uoc) == true)
		{
			return uoc;
		}
	}
	return 1;
}
void mainbai171()
{
	int n, s[1000];
	mangmotchieu(s, n);
	int timuocchunglonnhat = uocchunglonnhatcuamang(s, n);
	printf("uoc chung lon nhat cua tat ca cac phan tu trong mang la: %d", timuocchunglonnhat); 
	_getch();
}