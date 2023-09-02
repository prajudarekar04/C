#include<stdio.h>
#include<conio.h>
void main()
{
	void display();
	void (*fptr)();
	clrscr();
	fptr=display;
	(*fptr)();
	getch();
	return;
}
void display()
{
	printf("\n Welcome");
	return;
}