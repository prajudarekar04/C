//For Loop
//To display 'Welcome' 5 times.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)	//i=1; while(i<=5) { printf("\nWelcome%d",i); i++; }
	printf("\n Welcome %d", i);
	getch();
	return;
}