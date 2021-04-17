#include<stdio.h>
#include<conio.h>

int main()
{
	int thang, nam, songay;
	printf("Nhap thang va nam: ");
	scanf_s("%d %d", &thang, &nam);
	if (thang >= 1 && thang <= 12)
	{
		switch (thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: songay = 31; break;
		case 4:
		case 6:
		case 9:
		case 11: songay = 30; break;
		case 2:
			if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
				songay = 29;
			else
				songay = 28;
		}
		printf("thang %d nam %d co %d ngay\n", thang, nam, songay);
	}
	else
		printf("thang khong hop le!\n");
	_getch();
	return 0;
}