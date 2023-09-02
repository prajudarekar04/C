#include<stdio.h>
#include<conio.h>
void main()
{
	char a='x';
	char *b;
	clrscr();
	b=&a;
	printf("\n %c",a);
	printf("\n %u",&a);
	printf("\n %c",*(&a));
	printf("\n %u",b);
	printf("\n %u",&b);
	printf("\n %u",*(&b));
	printf("\n %c",*(*(&b)));
	printf("\n %c",*b);
	getch();
	return;
}