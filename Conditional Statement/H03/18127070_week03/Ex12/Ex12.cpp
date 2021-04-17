#include<stdio.h>
#include<conio.h>

int main()
{
	int nam;
printf("Nhap nam: ");
scanf_s("%d", &nam);
if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
printf("Leap year");
else printf("No leap year");
_getch();
return 0;
}