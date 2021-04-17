#include<stdio.h>
#include<conio.h>
#include"Ex82.h"
void mainbai82()
{
	int day1, month1, year1, day2, month2, year2;
	printf("Enter the day: ");
	scanf_s("%d", &day1);
	printf("Enter the month: ");
	scanf_s("%d", &month1);
	printf("Enter the year: ");
	scanf_s("%d", &year1);
	if (month1 % 2 != 0 && month1 >= 1 && month1 <= 7 && day1 == 31)
	{
			day2 = 1;
			month2 = month1 + 1;
			year2 = year1;
	}
	else if (month1 % 2 == 0 && 8 <= month1 && month1 <= 12 && day1 == 31)
	{
			day2 = 1;
			month2 = month1 + 1;
			year2 = year1;
	}
	else if (month1 % 2 == 0 && 4 <= month1 && month1 <= 6 && day1 == 30)
	{
			day2 = 1;
			month2 = month1 = 1;
			year2 = year1;
	}
	else if (month1 % 2 != 0 && 9 <= month1 && month1 <= 11 &&day1 == 30)
	{
			day2 = 1;
			month2 = month1 + 1;
			year2 = year1;
	}
	else if (month1 == 2 && year1 % 4 == 0 && day1 == 29)
	{
			day2 = 1;
			month2 = month1 + 1;
			year2 = year1;
	}
	else if (month1 == 2 && year1 % 4 != 0 && day1 == 28)
	{
			day2 = 1;
			month2 = month1 + 1;
			year2 = year1;
	}
	else if (month1 == 12 && day1 == 31)
	{
		day2 = 1;
		month2 = 1;
		year2 = year1 + 1;
	}
	else
	{
		day2 = day1 + 1;
		month2 = month1;
		year2 = year1;
	}
	printf("The next date is: %d/%d/%d\n", day2, month2, year2);
	_getch();
}