#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nEnter No:");
	scanf("%d", &a);
	printf("\n A: %d", a);
	a=a+3;
	printf("\n A: %d", a);
	a+=2;
	printf("\n A: %d", a);
	b=a/2;
	printf("\n B: %d", b);
	b*=2;
	printf("\n B: %d", b);
	getch();
	return;
}
