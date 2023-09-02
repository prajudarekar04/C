#include<stdio.h>
#include<conio.h>
void main()
{
	int x=10;
	int *y;
	clrscr();
	y=&x;
	printf("\n %d",x);
	printf("\n %u",&x);
	printf("\n %d",*(&x));
	printf("\n %u",y);
	printf("\n %u",&y);
	printf("\n %u",*(&y));
	printf("\n %d",*(*(&y)));
	printf("\n %d",*y);
	*y=*y+5;
	printf("\n %d",*y);
	getch();
	return;
}