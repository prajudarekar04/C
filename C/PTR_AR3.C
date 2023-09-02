#include<stdio.h>
#include<conio.h>
void main()
{
	int x[i];
	int *p=x+0;
	int *q=x+4;
	clrscr();
	printf("\nArry data:");
	while(p<=q)
	{
		scanf("%d",p);
		p++;
	}
	printf("\nData\n");
	while(p<=q)
	{
		printf("%4d",*p);
		p++;
	}
	getch();
	return;
