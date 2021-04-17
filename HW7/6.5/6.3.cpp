#include<iostream>
#include<math.h>
using namespace std;

int mainbai3()
{
	double a, b, c;
	cout << "Nhap a, b, c: ";
	cin >> a >> b >> c;
	if (a == 0 || b == 0 || c == 0)
	{
		cout << "Khong lap thanh tam giac!" << endl;
	}
	else
	{
		if ((a == b && a == c) || (a == b && b == c))
		{
			cout << "Lap thanh tam giac" << endl;
			cout << "Loat tam giac la deu" << endl;
		}
		else
		{
			if (a == b || b == c || a == c)
			{
				if (c == sqrt(a * a + b * b) || b == sqrt(a * a + c * c) || a == sqrt(b * b + c * c))
				{
					cout << "Lap thanh tam giac" << endl;
					cout << "Loat tam giac la vuong can" << endl;
				}
				else
				{
					cout << "Lap thanh tam giac" << endl;
					cout << "Loat tam giac la can." << endl;
				}
			}
			else
			{
				if (c == sqrt(a * a + b * b) || b == sqrt(a * a + c * c) || a == sqrt(b * b + c * c))
				{
					cout << "Lap thanh tam giac" << endl;
					cout << "Loat tam giac la vuong" << endl;
				}
				else
				{
					cout << "Lap thanh tam giac" << endl;
					cout << "Loat tam giac la thuong" << endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}