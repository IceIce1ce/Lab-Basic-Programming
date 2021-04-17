#include <stdio.h>
#include <conio.h>
int main()
{
	int t;
	t = 0;
	for (int i = 100; i <= 999; i++)
	{
		if (((i / 10) % 10) == (i / 100 + i % 10))
		{
			t = t + 1;
			printf("%d : %d thoa tinh chat\n", t, i);
		}
		else continue;
	}
	printf("tat ca so thoa tinh chat\n", t);
	_getch();
	return 0;
}