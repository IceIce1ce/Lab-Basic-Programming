//Thao tac tren phan so
#include<stdio.h>
#include<conio.h>
#include<math.h>
struct phanso
{
	int tu;
	int mau;
};
void nhapphanso(phanso &ps);
void xuatphanso(phanso ps);
void rutgon(phanso &ps);
int sosanh(phanso a, phanso b);
int ucln(int a, int b);
phanso tongps(phanso a, phanso b);
phanso hieups(phanso a, phanso b);
phanso tichps(phanso a, phanso b);
phanso thuongps(phanso a, phanso b);
void nhapphanso(phanso &ps)
{
	printf("Nhap tu so: ");
	scanf_s("%d", &ps.tu);
	do
	{
		printf("Nhap mau so: ");
		scanf_s("%d", &ps.mau);
		if (ps.mau == 0)
			printf("Gia tri cua mau khong hop le!");
	} while (ps.mau == 0);
}
void xuatphanso(phanso ps)
{
	printf("%d / %d", ps.tu, ps.mau);
}
phanso tongps(phanso a, phanso b)
{
	phanso tong;
	tong.tu = a.tu*b.mau + b.tu*a.mau;
	tong.mau = a.mau*b.mau;
	rutgon(tong);
	return tong;
}
phanso hieups(phanso a, phanso b)
{
	phanso hieu;
	hieu.tu = a.tu*b.mau - b.tu*a.mau;
	hieu.mau = a.mau*b.mau;
	rutgon(hieu);
	return hieu;
}
phanso tichps(phanso a, phanso b)
{
	phanso tich;
	tich.tu = a.tu*b.tu;
	tich.mau = a.mau*b.mau;
	rutgon(tich);
	return tich;
}
phanso thuongps(phanso a, phanso b)
{
	phanso thuong;
	thuong.tu = a.tu*b.mau;
	thuong.mau = a.mau*b.tu;
	rutgon(thuong);
	return thuong;
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
int sosanh(phanso a, phanso b)
{
	int x =  a.tu / a.mau;
	int y =  b.tu / b.mau;
	if (x > y) return 1;
	if (x < y) return -1;
	else return 0;
}
int xetdaua(phanso a)
{
	if (a.tu * a.mau > 0) return 2;
	if (a.tu * a.mau < 0) return 3;
	if (a.tu * a.mau == 0) return 4;
}
int xetdaub(phanso b)
{
	if (b.tu * b.mau > 0) return 5;
	if (b.tu * b.mau < 0) return 6;
	if (b.tu * b.mau == 0) return 7;
}
int main()
{
	phanso a, b;
	printf("Nhap phan so thu nhat: \n");
	nhapphanso(a);
	xuatphanso(a);
	if (xetdaua(a) == 2)
		printf("\nphan so a lon hon 0");
	if (xetdaua(a) == 3)
		printf("\nPhan so a be hon 0");
	if (xetdaua(a) == 4)
		printf("\nPhan so a bang 0");
	printf("\nNhap phan so thu hai: \n");
	nhapphanso(b);
	xuatphanso(b);
	if (xetdaub(b) == 5)
		printf("\nphan so b lon hon 0");
	if (xetdaub(b) == 6)
		printf("\nPhan so b be hon 0");
	if (xetdaub(b) == 7)
		printf("\nPhan so b bang 0");
	phanso tong = tongps(a, b);
	printf("\nTong hai phan so da rut gon la: ");
	xuatphanso(tong);
	phanso hieu = hieups(a, b);
	printf("\nHieu hai phan so da rut gon la: ");
	xuatphanso(hieu);
	phanso tich = tichps(a, b);
	printf("\nTich hai phan so da rut gon la: ");
	xuatphanso(tich);
	phanso thuong = thuongps(a, b);
	printf("\nThuong hai phan so da rut gon la: ");
	xuatphanso(thuong);
	int ss = sosanh(a, b);
	{
	if (ss == 1) printf("\nphan so a lon hon phan so b"); 
	if (ss == -1) printf("\nphan so a be hon phan so b"); 
	if (ss == 0) printf("\nphan so a bang phan so b");
	}
	_getch();
}