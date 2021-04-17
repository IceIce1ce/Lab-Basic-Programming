//Thao tac voi date
#include<stdio.h>
#include<conio.h>
const int minyear = 1900, maxyear = 10000;
struct ngay
{
	int day, month, year;
};
typedef struct ngay NGAY;
void nhapngay(NGAY &);
void xuatngay(NGAY);
bool kiemtranamnhuan(NGAY);
int tinhsothutungaytrongnam(NGAY);
NGAY tinhngaymai(NGAY);
NGAY tinhngayhomqua(NGAY);
int sosanh2ngay(NGAY);
bool ngayhople(int nDay, int nMonth, int nYear);
int tinhsongaytrongthang(int nMonth, int nYear);
bool namnhuan(int nYear);
bool kiemtranamnhuan(NGAY a)
{
	return (a.year % 4 == 0 && a.year % 100 != 0) || (a.year % 400 == 0);
}
bool kiemtranamnhuan(int i)
{
	if (i % 4 == 0 && i % 100 != 0)
		return true;
	if (i % 400 == 0)
		return true;
	return false;
}
int timsongaytrongthang(NGAY a)
{
	int ngaytrongthang;
	switch (a.month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		ngaytrongthang = 31;
		break;
	case 4: case 6: case 9: case 11:
		ngaytrongthang = 30;
		break;
	case 2:
		int kiemtra = kiemtranamnhuan(a);
		if (kiemtra == 1)
		{
			ngaytrongthang = 29;
		}
		else
		{
			ngaytrongthang = 28;
		}
	}
	return ngaytrongthang;
}
void nhapngay(NGAY &a)
{
	do
	{
		printf("Nhap vao nam: ");
		scanf_s("%d", &a.year);
		if (a.year < minyear || a.year > maxyear)
		{
			printf("\nkhong hop le!");
		}
	} while (a.year < minyear || a.year > maxyear);
	do
	{
		printf("Nhap vao thang: ");
		scanf_s("%d", &a.month);
		if (a.month < 1 || a.month > 12)
			printf("\nkhong hop le!");
	} while (a.month < 1 || a.month > 12);
	int ngaytrongthang = timsongaytrongthang(a);
	do
	{
		printf("Nhap vao ngay: ");
		scanf_s("%d", &a.day);
		if (a.day < 1 || a.day > ngaytrongthang)
		{
			printf("\nkhong hop le!");
		}
	} while (a.day < 1 || a.day > ngaytrongthang);
}
void xuatngay(NGAY ng)
{
	printf("%d/%d/%d", ng.day, ng.month, ng.year);
}
NGAY timngayketiep(NGAY a)
{
	int ngaytrongthang = timsongaytrongthang(a);
	if (a.day < ngaytrongthang)  
	{
		a.day++;
	}
	else if (a.month < 12)     
	{
		a.day = 1; a.month++;
	}
	else                     
	{
		a.day = a.month = 1;
		a.year++;
	}
	return a;
}
NGAY timngayhomqua(NGAY a)
{
	int ngaytrongthang = timsongaytrongthang(a);
	if (a.day == 1)          
	{
		a.day = ngaytrongthang;        
		if (a.month == 1)           
		{
			a.month = 12;
			a.year--;
		}
		else                    
			a.month--;
	}
	else                
		a.day--;
	return a;
}
int tinhsothutungaytrongnam(NGAY a)
{
	int t = a.day;
	for (int i = 1; i < a.month; i++)
	{
		switch (i)
		{
		case 4: case 6: case 9: case 11: t += 30; break;
		case 2: t += (a.year % 4 == 0 && a.year % 100 != 0 || a.year % 400 == 0) ? 29 : 28;
			break;
		default: t += 31;
		}
	}
	return t;
}
int sosanh2ngay(NGAY a, NGAY b)
{
	int e = tinhsothutungaytrongnam(a);
	int f = tinhsothutungaytrongnam(b);
	if (e > f)
	{
		return 1; 
	}
	if (f > e)
	{
		return 0;  
	}
	return -1;  
}
bool ngayhople(int nDay, int nMonth, int nYear)
{
	if (nYear < 0)
	{
		return false; 
	}
	if (nMonth < 1 || nMonth > 12)
	{
		return false; 
	}
	if (nDay < 1 || nDay > tinhsongaytrongthang(nMonth, nYear))
	{
		return false; 
	}
	return true; 
}
int tinhsongaytrongthang(int nMonth, int nYear)
{
	int songay;
	switch (nMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		songay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		songay = 30;
		break;
	case 2:
		if (namnhuan(nYear))
		{
			songay = 29;
		}
		else
		{
			songay = 28;
		}
		break;
	}

	return songay;
}
bool namnhuan(int nYear)
{
	if ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0)
	{
		return true;
	}
	return false;
}
int main()
{
	int nDay, nMonth, nYear;
	NGAY a;
	nhapngay(a);
	xuatngay(a);
	NGAY c = timngayketiep(a);
	printf("\nNgay mai la ngay: %d/%d/%d", c.day, c.month, c.year);
	NGAY d = timngayhomqua(a);
	printf("\nNgay hom qua la ngay: %d/%d/%d", d.day, d.month, d.year);
	printf("\nNhap ngay: ");
	scanf_s("%d", &nDay);
	printf("Nhap thang: ");
	scanf_s("%d", &nMonth);
	printf("Nhap nam: ");
	scanf_s("%d", &nYear);
	if (ngayhople(nDay, nMonth, nYear))
	{
		printf("%d/%d/%d la ngay hop le", nDay, nMonth, nYear);
	}
	else
	{
		printf("%d/%d/%d khong hop le", nDay, nMonth, nYear);
	}
	_getch();
	return 0;
}