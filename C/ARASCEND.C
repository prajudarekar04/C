//To check array data is in ascending order.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i=0;
	clrscr();
	printf("\nArray Data:");
	for(i=0;i<10;i++)
		scanf("%d",&x[i]);
	for(i=1;i<10;i++)
	{
		if(x[i]<x[i-1])
			break;
	}
	if(i==10)
		printf("\nOrdered Data.");
	else
		printf("\nUnordered Data.");
	getch();
	return;
}