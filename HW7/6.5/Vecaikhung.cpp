#include <stdio.h>
#include <conio.h>
#include "menu.h"

void menu()
{
	printf("%c", 201);
	for (int i = 1; i <= 33; i++)
	{
		printf("%c", 196);
	}
	printf("%c\n", 187);
	printf("%c  1. Bai tap 6.1.                %c\n", 179, 179);
	printf("%c  2. Bai tap 6.2.                %c\n", 179, 179);
	printf("%c  3. Bai tap 6.3.                %c\n", 179, 179);
	printf("%c  4. Bai tap 6.4.                %c\n", 179, 179);
	printf("%c  5. Thoat.                      %c\n", 179, 179);
	printf("%c", 200);
	for (int i = 1; i <= 33; i++)
	{
		printf("%c", 196);
	}
	printf("%c\n\n", 188);
	printf("Lua chon cua ban (1-5): ");
}