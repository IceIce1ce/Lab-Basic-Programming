#include<iostream>

using namespace std;

int main()
{
	int giothuephong, thoidiemthue, thutrongtuan, vip, tienthue;

	do
	{
		cout << "Nhap so gio thue phong: ";
		cin >> giothuephong;
	} 
	while (giothuephong < 0 || giothuephong > 10);

	do
	{
		cout << "Nhap thu trong tuan, CN = 8, nhap tu 2->8: ";
		cin >> thutrongtuan;
	} 
	while (thutrongtuan < 2 || thutrongtuan >8);

	cout << "co lua chon phong VIP hay khong, bam 0 la khong chon, bam cac so con lai la co chon: ";
	cin >> vip;

	do
	{
		cout << "thoi diem vao karaoke: " << endl << "nhap so 1 : 10:00 -> 18:00. nhap so 2 : sau 18:00: " << endl;
		cin >> thoidiemthue;
	} 
	while (thoidiemthue < 1 || thoidiemthue > 2);

	if (thutrongtuan <= 6)
	{
		if (thoidiemthue == 1)
		{
			if (vip != 0)
			{
				tienthue = 100000 * giothuephong;
			}
			else
			{
				tienthue = 80000 * giothuephong;
			}
		}
		else
		{
			if (vip != 0)
			{
				tienthue = 300000 * giothuephong;
			}
			else
			{
				tienthue = 200000 * giothuephong;
			}
		}
	}
	else
	{
		if (vip != 0)
		{
			tienthue = 400000 * giothuephong;
		}
		else
		{
			tienthue = 200000 * giothuephong;
		}
	}
	cout << "so tien thue phong la: " << tienthue << endl;

	system("pause");
	return 0;
}