#include<stdio.h>
#include<conio.h>
void main()
{
	char chucai;
	printf("Nhap vao mot chu cai: ");
	scanf_s("%c", &chucai);
	if (chucai >= 'a'&&chucai <= 'z')
		chucai= chucai - 32;
	else
	{
		if (chucai >= 'A'&&chucai <= 'Z')
			chucai = chucai + 32;
		else
			printf("\nKhong phai chu cai!");
	}
	printf("%c\n", chucai);
	_getch();
}