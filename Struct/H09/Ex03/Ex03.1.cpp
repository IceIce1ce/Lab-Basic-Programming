//Thao tac voi mang ngay
#include<stdio.h>
#include<conio.h>
struct date
{
	int day, month, year;
};
void nhap(date a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		do
		{
			printf("Nhap ngay: ");
			scanf_s("%d", &a[i].day);
			if (a[i].day < 1 || a[i].day > 31)
			{
				printf("Khong hop le!\n");
			}
		} while (a[i].day < 1 || a[i].day > 31);
		do
		{
			printf("Nhap thang: ");
			scanf_s("%d", &a[i].month);
			if (a[i].month < 1 || a[i].month > 12)
			{
				printf("Khong hop le!\n");
			}
		} while (a[i].month < 1 || a[i].month > 12);
		do
		{
			printf("Nhap nam: ");
			scanf_s("%d", &a[i].year);
			if (a[i].year < 1900 || a[i].month > 10000)
			{
				printf("Khong hop le!\n");
			}
		} while (a[i].year < 1900 || a[i].month > 10000);
	}
}
void xuat(date a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d/%d/%d\t", a[i].day, a[i].month, a[i].year);
}
void hv(int &a, int &b)
{
	int flag = a;
	a = b;
	b = flag;
}
void sapxepgiamdan(date a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].day < a[j].day)
			{
				hv(a[i].day, a[j].day);
			}
			if (a[i].month < a[j].month)
			{
				hv(a[i].month, a[j].month);
			}
			if (a[i].year < a[j].year)
			{
				hv(a[i].year, a[j].year);
			}
		}
	}
}
int demsoluongnamnhuan(date a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if ((a[i].year % 4 == 0 && a[i].year % 100 != 0) || a[i].year % 400 == 0)
		{
			dem++;
		}
		return dem;
	}
}
int main()
{
	date a[20];
	int n, day, month, year;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	nhap(a, n);
	xuat(a, n);
	sapxepgiamdan(a, n);
	printf("\nCac ngay theo thu tu giam dan la: ");
	xuat(a, n);
	int dem = demsoluongnamnhuan(a, n);
	printf("\nSo luong ngay roi vao nam nhuan la: %d", dem);
	_getch();
	return 0;
}