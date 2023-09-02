#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char p[50];
	void display(char *);
	void upper(char *);
	clrscr();
	printf("\nEnter String:");
	gets(p);
	display(p);
	upper(p);
	getch();
	return;
}
void upper(char*b)
{
	while(*b!='\0')
	{
		if(*b>=97&&*b<=122)
			*b=*b-32;
		printf("%c",b);
		b++;
	}
	return;
}
void display(char*a)
{
	printf("\nString\n");
	while(*a!='\0')
	{
		printf("%c",a);
		a++;
	}
	return;
}