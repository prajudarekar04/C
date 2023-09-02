//Table of 1-10
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		printf("%4d",i*j);
		printf("\n");
	}
	getch();
	return;

}