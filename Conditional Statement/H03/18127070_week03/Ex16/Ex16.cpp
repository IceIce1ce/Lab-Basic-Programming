#include<iostream>

using namespace std;

int main()
{
	int thutrongtuan, thoidiemxemphim;

	do
	{
		cout << "Nhap vao 1 thu trong tuan. CN=8, nhap tu 2->8: ";
		cin >> thutrongtuan;
	} while (thutrongtuan < 2 || thutrongtuan > 8);

	do
	{
		cout << "Nhap thoi diem xem phim. Nhap 1: truoc 17h, nhap 2: tu 17h: ";
		cin >> thoidiemxemphim;
	} 
	while (thoidiemxemphim != 1 && thoidiemxemphim != 2);

	if (thutrongtuan == 3)
	{
		cout << "Happy day. Gia ve la 50.000" << endl;
	}
	else
	{
		if (thutrongtuan < 6)
		{
			if (thoidiemxemphim == 1)
			{
				cout << "Gia ve la 60.000" << endl;
			}
			else
			{
				cout << "Gia ve la 70.000" << endl;
			}
		}
		else
		{
			if (thoidiemxemphim == 1)
			{
				cout << "Gia ve la 75.000" << endl;
			}
			else
			{
				cout << "Gia ve la 80.000" << endl;
			}
		}
	}

	system("pause");
	return 0;
}