#include<iostream>
using namespace std;

int mainbai4()
{
	int dienthangtruoc, dienthangnay, sodiensudung;
	double tiendien;
	do
	{
		cout << "Nhap vao so dien thang truoc: ";
		cin >> dienthangtruoc;
		cout << "nhap vao so dien thang nay: ";
		cin >> dienthangnay;
	} while (dienthangtruoc < 0 || dienthangnay<0 || dienthangtruoc > dienthangnay);
	sodiensudung = dienthangnay - dienthangtruoc;
	if (sodiensudung == 0)
	{
		cout << "0kwh se tinh la 1kwh" << endl;
		sodiensudung++;
	}
	if (sodiensudung >= 401)
	{
		tiendien = (sodiensudung - 400) * 2701 + 100 * (2615 + 2340 + 1858) + 50 * (1600 + 1549);
	}
	else
	{
		if (sodiensudung > 300)
		{
			tiendien = (sodiensudung - 300) * 2615 + 100 * (2340 + 1858) + 50 * (1600 + 1549);
		}
		else
		{
			if (sodiensudung > 200)
			{
				tiendien = (sodiensudung - 200) * 2340 + 100 * 1858 + 50 * (1600 + 1549);
			}
			else
			{
				if (sodiensudung > 100)
				{
					tiendien = (sodiensudung - 100) * 1858 + 50 * (1600 + 1549);
				}
				else
				{
					if (sodiensudung > 50)
					{
						tiendien = (sodiensudung - 50) * 1600 + 50 * 1549;
					}
					else
					{
						tiendien = sodiensudung * 1549;
					}
				}
			}
		}
	}
	cout << "so kWh dien da su dung: " << sodiensudung << " kWh" << endl;
	cout << "so tien dien can phai tra la: " << tiendien * 1.0 << endl;
	system("pause");
	return 0;
}