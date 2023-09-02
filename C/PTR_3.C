#include<stdio.h>
#include<conio.h>
void main()
{
	float a=9.2;
	float *b;
	clrscr();
	b=&a;
	printf("\n %f",a);
	printf("\n %u",&a);
	printf("\n %f",*(&a));
	printf("\n %u",b);
	printf("\n %u",&b);
	printf("\n %u",*(&b));
	printf("\n %f",*(*(&b)));
	printf("\n %f",*b);
	getch();
	return;
}