//To update an array of 5 integer & count sum & avg.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i=0,tot=0,avg;
	clrscr();
	printf("\nArray Data\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
		tot=tot+x[i];
	}
	clrscr();
	printf("\nArray Data\n");
	for(i=0;i<5;i++)
		printf("%4d",x[i]);
	avg=tot/5;
	printf("\nTotal:%d\nAvg:%d",tot,avg);
	getch();
	return;
}