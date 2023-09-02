#include<stdio.h>
#include<conio.h>
void main()
{
	char p[50];
	void display(char *);
	void rev(char *);
	printf("\nEnter String:");
	gets(p);
	display(p);
	rev(p);
	getch();
	return;
}
void display(char *a)
{

	printf("\nString\n");
	while(*a!='\0')
	{
		printf("%c",a);
		a++;
	}
	return;
}
void rev(char*b)
{
	char *b=a+(strlen(a)-1);       //undefined a
	char tmp;
	while(a<b)
	{
		tmp=*a;
		*a=*b;
		*b=tmp;
		a++;
		b--;
	}
}