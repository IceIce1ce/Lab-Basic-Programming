#include<iostream>
#include<string.h>
#include<stdio.h>
#define MAX 100
#pragma warning (disable : 4996)
using namespace std;
void main()
{
	char chuoi[100];
	int i, j;
	FILE *f1 = fopen("E:\\BT10.txt", "w"); 
	printf("Nhap vao file mat lenh: ");
	gets_s(chuoi);
	printf("Nhap so buoc nhay k: ");
	scanf_s("%d", &j);
	for (i = 0; chuoi[i] != '\0'; i++)
	{
		char a = chuoi[i];
		if (a >= 'A' && a <= 'Z')
		{
			a = a + j;
			if (a > 'Z') a = a - 'Z' + 'A' - 1;
			chuoi[i] = a;
		}
		else if (a >= 'a' && a <= 'z')
		{
			a = a + j;
			if (a > 'z') a = a - 'z' + 'a' - 1;
			chuoi[i] = a;
		}
	}
	fprintf(f1,"%s", chuoi);
	fclose(f1);
	system("cls");
	FILE *f2 = fopen("E:\\BT10.txt", "r");
	fgets(chuoi, MAX, f2);
	fclose(f2);
	for (i = 0; chuoi[i] != '\0'; i++)
	{
		char b = chuoi[i];
		if (b >= 'A' && b <= 'Z')
		{
			b = b - j;
			if (b < 'A') b = b + 'Z' - 'A' + 1;
			chuoi[i] = b;
		}
		else if (b >= 'a' && b <= 'z')
		{
			b = b - j;
			if (b < 'a') b = b + 'z' - 'a' + 1;
			chuoi[i] = b;
		}
	}
	printf("file mat lenh sau khi duoc giai ma la: ", chuoi);
}