#include "menu.h"
#include "6.1.h"
#include "6.2.h"
#include "6.3.h"
#include "6.4.h"
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int luachon = 0;
	while (luachon != 5)
	{
		system("cls");
		menu();
		scanf_s("%d", &luachon);
		switch (luachon)
		{
		case 1: mainbai1(); break;
		case 2: mainbai2(); break;
		case 3: mainbai3(); break;
		case 4: mainbai4(); break;
		}
	}
}