#include<iostream>
#include<string.h>
#include"8.5.h"
using namespace std;
void viethoakitudau(char *s);
void vitrikhoangtrang(char a[50], int vitricanxoa);
void xoakhoangtrang(char *a);
int demtutrongchuoi(char *str);
void mainbai85()
{
	char s[50];
	cout << "Nhap vao chuoi ki tu S: " << endl;
	gets_s(s, 50);
	viethoakitudau(s);
	xoakhoangtrang(s);
	int dem = demtutrongchuoi(s);
	puts(s);
	printf("So tu cua chuoi la: %d\n", dem - 1);
	system("pause");
}
void viethoakitudau(char *s)
{
	s[0] = toupper(s[0]);
	while (strstr(s, " ") != NULL)
	{
		s = strstr(s, " ") + 1;
		s[0] = toupper(s[0]);
	}
}
void vitrixoakhoangtrang(char a[50], int vitricanxoa)
{
	int n = strlen(a);
	for (int i = vitricanxoa; i < n; i++)
		a[i] = a[i + 1];
	a[n - 1] = '\0';
}
void xoakhoangtrang(char*a)
{
	for (int i = 0; i < strlen(a); i++)
		if (a[i] == ' '&& a[i + 1] == ' ')
		{
			vitrixoakhoangtrang(a, i);
			i--;
		}
	if (a[0] == ' ')
		vitrixoakhoangtrang(a, 0);
	if (a[strlen(a) - 1] == ' ')
		vitrixoakhoangtrang(a, strlen(a) - 1);
}
int demtutrongchuoi(char *str)
{
	int i, dem = 0;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == ' '&&str[i + 1] != ' '&&str[i + 1] != '\0' || str[i] == ','&&str[i + 1] != ','&&str[i + 1] != '\0' || str[i] == '.'&&str[i + 1] != '.'&&str[i + 1] != '\0' || str[i] == '?'&&str[i + 1] != '?'&&str[i + 1] != '\0' || str[i] == '!'&&str[i + 1] != '!'&&str[i + 1] != '\0')
			dem++;
	if (str[0] != ' ')
		dem++;
	return dem;
}