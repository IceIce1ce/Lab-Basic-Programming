#include<iostream>

using namespace std;

int main()
{
	int sonuocthangtruoc, sonuocthangnay, sonuocsudung; 

	double tiennuoc;

	do
	{
		cout << "Nhap so nuoc thang truoc: ";
		cin >> sonuocthangtruoc;
		cout << "Nhap so nuoc thang nay: ";
		cin >> sonuocthangnay;
	} 
	while (sonuocthangtruoc < 0 || sonuocthangnay < 0 || sonuocthangtruoc > sonuocthangnay);

	sonuocsudung = sonuocthangnay - sonuocthangtruoc;

	if (sonuocsudung == 0)
	{
		cout << "0 m3 se tinh la 1 m3 " << endl;
		sonuocsudung = 1;
	}

	if (sonuocsudung > 6)
	{
		tiennuoc = (sonuocsudung - 6) * 7000 + 2 * 5200 + 4 * 3300;
	}
	else
	{
		if (sonuocsudung > 4)
		{
			tiennuoc = (sonuocsudung - 4) * 5200 + 4 * 3300;
		}
		else
		{
			tiennuoc = sonuocsudung * 3300;
		}
	}

	cout << "so m3 nuoc su dung la: " << sonuocsudung << endl;
	cout << "so tien nuoc: " << tiennuoc << endl;
	cout << "tien thue: " << tiennuoc * 0.1 << endl;
	cout << "so tien nuoc can phai tra la: " << tiennuoc * 1.1 <<  endl;

	system("pause");
	return 0;
}