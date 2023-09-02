//Operators in C
//Arithmetic Operator
// + - * / %
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int a, b;
	clrscr();
	printf("\nEnter no:");
	scanf("%d", &a);
	printf("\nA: %d", a);
	a=a+3;
	printf("\nA: %d", a);
	b=a/2;
	printf("\nB: %d", b);
	printf("\n %d", a/b);
	printf("\n %d", a%b);
	b=b/2;
	printf("\n %d", b);
	b=a+3;
	printf("\nB: %d", b);
	return;
}