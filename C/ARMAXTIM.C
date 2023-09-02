//To find out max. from an array of 10 int.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i=0,max;           //int x[10],i=0,min;
	clrscr();
	printf("\nEnter Nos.:");
	for(i=0;i<10;i++)
		scanf("%d",&x[i]);
	{
		if(i==0)
			max=x[i];    //min=x[i];
		else
		{
			if(x[i]>max) //if(x[i]<min)
				max=x[i]; //min=x[i];
		}
	}
	clrscr();
	printf("\nArray Data\n");
	for(i=0;i<10;i++)
		printf("%4d",x[i]);
	printf("\nMax Value:%d");    //printf("\nMin Value:%d");
	getch();
	return;
}