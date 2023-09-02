#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i;
	void input(int*);
	void display(int);
	clrscr();
	for(i=0;i<5;i++)
		input(&x[i]);
	printf("\nData:");
	for(i=0;i<5;i++)
		display(x[i]);
	getch();
	return;
}
void input(int*a)
{
	printf("\nEnter No:");
	scanf("%d",a);
}
void display(int b)
{
	printf("%4d",b);
}