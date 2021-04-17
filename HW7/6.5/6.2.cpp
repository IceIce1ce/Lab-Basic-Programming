#include<iostream>
using namespace std;
struct phanso
{
	int tuso, mauso;
};
void nhapphanso(phanso &x)
{
	cout << "Nhap tu so: "; cin >> x.tuso;
	do
	{
		cout << "Nhap mau so: ";
		cin >> x.mauso;
		if (x.mauso == 0)
			printf("Nhap sai, vui long nhap lai mau so\n");
	} while (x.mauso == 0);
}
void xuatketquaphanso(phanso x)
{
	cout << x.tuso << "/" << x.mauso;
}
float tonghaiphanso(phanso x1, phanso x2)
{
	int T, M;
	T = x1.tuso*x2.mauso + x1.mauso*x2.tuso;
	M = x1.mauso*x2.mauso;
	return (float)T / M;
}

float hieuhaiphanso(phanso x1, phanso x2)
{
	int T, M;
	T = x1.tuso*x2.mauso - x1.mauso*x2.tuso;
	M = x1.mauso*x2.mauso;
	return (float)T / M;
}
float tichhaiphanso(phanso x1, phanso x2)
{
	int T, M;
	T = x1.tuso * x2.tuso;
	M = x1.mauso * x2.mauso;
	return (float)T / M;
}
float thuonghaiphanso(phanso x1, phanso x2)
{
	int T, M;
	T = x1.tuso * x2.mauso;
	M = x1.mauso * x2.tuso;
	return (float)T / M;
}
void mainbai2()
{
	phanso phansothunhat, phansothuhai;
	printf("Nhap phan so: ");
	nhapphanso(phansothunhat);
	nhapphanso(phansothuhai);
	cout << "Phan so 1 la: "; xuatketquaphanso(phansothunhat);
	cout << "\nPhan so 2 la: "; xuatketquaphanso(phansothuhai);
	cout << "\nTong 2 phan so la: " << tonghaiphanso(phansothunhat, phansothuhai);
	cout << "\nHieu 2 phan so la: " << hieuhaiphanso(phansothunhat, phansothuhai);
	cout << "\nTich 2 phan so la: " << tichhaiphanso(phansothunhat, phansothuhai);
	cout << "\nThuong 2 phan so la: " << thuonghaiphanso(phansothunhat, phansothuhai);
	cout << endl;
	system("pause");
}