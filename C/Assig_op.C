//Assignment Operator
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nEnter No:");
	scanf("%d", &a);
	printf("\n A: %d", a);
	b=a;
	printf("\n B: %d", b);
	a=b+5;
	printf("\n A: %d", a);
	getch();
	return;
}