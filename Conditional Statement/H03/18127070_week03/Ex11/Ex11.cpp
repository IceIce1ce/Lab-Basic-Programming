#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int km;
	double tongtien;

	do
	{
		cout << "Nhap so km da di: ";
		cin >> km;
	} 
	while (km < 0);

	if (km > 12)
	{
		tongtien = ((km - 5) * 11000 + 4 * 13500 + 15000)*0.9; 
	}
	else
	{
		if (km >= 5)
		{
			tongtien = (km - 5) * 11000 + 4 * 13500 + 15000;
		}
		else
		{
			if (km > 1)
			{
				tongtien = (km - 1)*13500 + 15000;
			}
			else
			{
				tongtien = 15000;
			}
		}
	}
	cout << "So tien phai tra la: " << tongtien << endl;
	_getch();
	return 0;
}