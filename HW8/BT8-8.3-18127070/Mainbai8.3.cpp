#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string.h> 
#include"8.3.h"
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
using namespace std;
void chenchuoikitu(char *s1, char *s2, int vitricanchen)
{
	char s[100];
	vitricanchen = strlen(s2) / 2;
	strcpy(s, s2 + vitricanchen);
	strcpy(s2 + vitricanchen, s1);
	strcat(s2, s);
	puts(s2);
}
void mainbai83()
{
	char s1[100], s2[100];
	int vitricanchen;
	printf("Nhap vao chuoi ki tu S1: ");
	gets_s(s1);
	printf("Nhap vao chuoi ki tu S2: ");
	gets_s(s2);
	printf("Nhap mot phim bat ki de chen chuoi ki tu: ");
	cin >> vitricanchen;
	chenchuoikitu(s1, s2, vitricanchen);
	system("pause");
}