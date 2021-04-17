#include<iostream>

using namespace std;

int main()
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
		sodiensudung ++;
	}

	if (sodiensudung >= 401)
	{
		tiendien = (sodiensudung - 400) * 2587 + 100 * (2503 + 2242 + 1786) + 50 * (1533 + 1484);
	}
	else
	{
		if (sodiensudung > 300)
		{
			tiendien = (sodiensudung - 300) * 2503 + 100 * (2242 + 1786) + 50 * (1533 + 1484);
		}
		else
		{
			if (sodiensudung > 200)
			{
				tiendien = (sodiensudung - 200) * 2242 + 100 * 1786 + 50 * (1533 + 1484);
			}
			else
			{
				if (sodiensudung > 100)
				{
					tiendien = (sodiensudung - 100) * 1786 + 50 * (1533 + 1484);
				}
				else
				{
					if (sodiensudung > 50)
					{
						tiendien = (sodiensudung - 50) * 1533 + 50 * 1484;
					}
					else
					{
						tiendien = sodiensudung * 1484;
					}
				}
			}
		}
	}

	cout << "so kWh dien da su dung: " << sodiensudung << " kWh" << endl;
	cout << "so tien dien: " << tiendien << endl;
	cout << "tien thue: " << tiendien * 0.1 << endl;
	cout << "so tien dien can phai tra la: " << tiendien * 1.1 << endl;

	system("pause");
	return 0;
}