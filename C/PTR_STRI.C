#include<stdio.h>
#include<conio.h>
void main()
{
	char p[50];
	void display(char *);
	printf("\nEnter String:");
	gets(p);
	display(p);
	getch();
	return;
}
void display(char*a)
{
	puts(a);
	return;
}