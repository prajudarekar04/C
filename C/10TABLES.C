#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=11;i<=20;i++)
	{
		for(j=1;j<=10;j++)
		printf("\n%4d",i*j);
		printf("\n");
	}
	getch();
	return;
}