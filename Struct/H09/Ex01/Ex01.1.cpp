//Thao tac tren mang phan so
#include<stdio.h>
#include<conio.h>
#include<math.h>
struct phanso
{
	int tu;
	int mau;
};
void sapxeptangdan(phanso a[], int n);
void rutgon(phanso &ps);
int ucln(int a, int b);
phanso tongps(phanso a, phanso b);
void nhap(phanso a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: \n", i);
		printf("Nhap tu: ");
		scanf_s("%d", &a[i].tu);
		printf("Nhap mau: ");
		scanf_s("%d", &a[i].mau);
	}
}
void xuat(phanso a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d/%d\t", a[i].tu, a[i].mau);
}
void xuatphanso(phanso ps)
{
	printf("%d/%d", ps.tu, ps.mau);
}
phanso max(phanso a[], int n)
{
	int b, c;
	phanso max = a[0];
	for (int i = 1; i < n; i++)
	{
		b = a[i].tu * max.mau;
		c = max.tu * a[i].mau;
		if (c < b)
		{
			max = a[i];
		}
	}
	return max;
}
phanso min(phanso a[], int n)
{
	int b, c;
	phanso min = a[0];
	for (int i = 1; i < n; i++)
	{
		b = a[i].tu * min.mau;
		c = min.tu * a[i].mau;
		if (c > b)
		{
			min = a[i];
		}
	}
	return min;
}
float giatri(float a, float b)
{
	float s;
	s = a / b;
	return s;
}
phanso psamdautien(phanso a[], int n)
{
	phanso am;
	for (int i = 0; i < n; i++)
	{
		if (giatri(a[i].tu, a[i].mau) < 0)
		{
			am = a[i]; break;
		}
	}
	return am;
}
int demps0(phanso a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if ((a[i].tu * a[i].mau) == 0)
			dem++;
	return dem;
}
void lietkepsduong(phanso a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (giatri(a[i].tu, a[i].mau) > 0)
			printf("%4d/%d", a[i].tu, a[i].mau);
	}
}
void tongphanso(phanso a[], int n)
{
	phanso S = a[0];
	for (int i = 1; i < n; i++)
	{
		if (giatri(a[i].tu, a[i].mau) != 0)
		{
			S = tongps(a[i], S);
		}
		else continue;
	}
	printf("\nTong cac phan so khac 0 la: ");
	xuatphanso(S);
}
phanso tongps(phanso a, phanso b)
{
	phanso tong;
	tong.tu = (a.tu*b.mau) + (b.tu*a.mau);
	if (tong.tu != 0)
	{
		tong.mau = a.mau*b.mau;
	}
	rutgon(tong);
	return tong;
}
int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
void rutgon(phanso &ps)
{
	int c = ucln(ps.tu, ps.mau);
	ps.tu = ps.tu / c;
	ps.mau = ps.mau / c;
}
void main()
{
	phanso a[100]; int n, tu, mau;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	nhap(a, n);
	xuat(a, n);
	phanso lonnhat = max(a, n);
	printf("\nphan so lon nhat la: ");
	xuatphanso(lonnhat);
	phanso nhonhat = min(a, n);
	printf("\nphan so nho nhat la: ");
	xuatphanso(nhonhat);
	phanso psam = psamdautien(a, n);
	printf("\nphan so am dau tien la: ");
	xuatphanso(psam);
	printf("\nCac phan so 0 trong mang la: %d", demps0(a, n));
	printf("\nCac phan so duong trong mang la: ");
	lietkepsduong(a, n);
	tongphanso(a, n);
	_getch();
}