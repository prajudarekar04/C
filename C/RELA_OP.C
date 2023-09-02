//Relational Operator
// > >= < <= == !=
// Output in form of 0 & 1.
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int a; char b;
	clrscr();
	printf("\n Enter Character:");
	scanf("%c", &b);
	printf("\n Enter No:");
	scanf("%d", &a);
	printf("\n %d", a>0);
	printf("\n %d", a<0);
	printf("\n %d", a==0);
	printf("\n %d", a%2==0);
	printf("\n %d", b>='A');
	printf("\n %d", b<='z');
	printf("\n %d", b!='1');
	printf("\n %d", b>=97);
	printf("\n %d", b<='3');
	return;
}