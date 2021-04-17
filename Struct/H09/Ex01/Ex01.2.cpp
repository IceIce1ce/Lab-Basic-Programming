//Thao tac tren mang phan so
#include<iostream>
using namespace std;
struct phanso
{
	float tu, mau;
};
void nhapps(phanso &a);
void xuatps(phanso a);
int sosanh(phanso a, phanso b);
int xetdau(phanso a);
void nhapmangps(phanso a[], int n);
void xuatmangps(phanso a[], int n);
void sapxeptangdan(phanso a[], int n);
void sapxep(phanso a[], int n);
void nhapps(phanso &a)
{
Public:
	cout << "Nhap tu: ";
	cin >> a.tu;
	do
	{
		cout << "Nhap mau: ";
		cin >> a.mau;
		if (a.mau == 0) cout << "Mau khong hop le" << endl;
	} while (a.mau == 0);
}
void xuatps(phanso a)
{
	if (a.tu == 0) cout << "0" << endl;
	else
	{
		if (a.mau == 1) cout << a.tu << endl;
		else cout << a.tu << " / " << a.mau << endl;
	}
}
int sosanh(phanso a, phanso b)
{
	float x = a.tu / a.mau;
	float y = b.tu / b.mau;
	if (x == y) return 0;
	else if (x > y) return 1;
	else if (x < y) return 2;
}
int xetdau(phanso a)
{
	if (a.tu == 0) return 0;
	float check = a.tu / a.mau;
	if (check < 0) return -1;
	if (check > 0) return 1;
}
void nhapmangps(phanso a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		nhapps(a[i]);
	}
}
void xuatmangps(phanso a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		xuatps(a[i]);
	}
}
void sapxeptangdan(phanso a[], int n)
{
	cout << "Sap xep cac phan so theo thu tu tang dan: " << endl;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			phanso temp = a[i];
			if (sosanh(a[i], a[j]) == 1)
			{
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	xuatmangps(a, n);
}
void sapxep(phanso a[], int n)
{
	cout << "Sap xep cac phan so am theo thu tu giam dan , cac phan so duong va 0 tang dan: " << endl;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			phanso flag = a[i];
			if (xetdau(a[i]) == -1 && xetdau(a[j]) == -1)
			{
				if (sosanh(a[i], a[j]) == 2)
				{
					a[i] = a[j];
					a[j] = flag;
				}
			}
			if (xetdau(a[i]) != -1 && xetdau(a[j]) != -1)
			{
				if (sosanh(a[i], a[j]) == 1)
				{
					a[i] = a[j];
					a[j] = flag;
				}
			}
		}
	}
	xuatmangps(a, n);
}
void main()
{
	phanso a[100]; int n;
	cout << "Nhap n: ";
	cin >> n;
	nhapmangps(a, n);
	xuatmangps(a, n);
	sapxeptangdan(a, n);
	sapxep(a, n);
	system("pause");
}