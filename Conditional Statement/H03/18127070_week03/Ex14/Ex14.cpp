#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double a, b, c; 

	cout << "Nhap do dai canh a: ";
	cin >> a;
	cout << "Nhap do dai canh b: ";
	cin >> b;
	cout << "Nhap do dai canh c: ";
	cin >> c;

	if (a == 0 || b == 0 || c == 0)
	{
		cout << "khong the tao thanh tam giac" << endl;
	}
	else
	{
		if ((a == b && a == c) || (a == b && b == c))
		{
			cout << "tam giac deu" << endl;
		}
		else
		{
			if (a == b || b == c || a == c)
			{
				if (c == sqrt(a * a + b * b) || b == sqrt(a * a + c * c) || a == sqrt(b * b + c * c))
				{
					cout << "tam giac vuong can" << endl;
				}
				else
				{
					cout << "tam giac can." << endl;
				}
			}
			else
			{
				if (c == sqrt(a * a + b * b) || b == sqrt(a * a + c * c) || a == sqrt(b * b + c * c))
				{
					cout << "tam giac vuong" << endl;
				}
				else
				{
					cout << "tam giac thuong" << endl;
				}
			}
		}
	}

	system("pause");
	return 0;
}