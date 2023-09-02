//To update an array of 10 int & find out max. data position.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i=0,xpos=0;         //int x[10],i=0,npos=0;
	clrscr();
	printf("\nEnter No.:\n");
	for(i=0;i<10;i++)
		scanf("%d",&x[i]);
	for(i=1;i<10;i++)
	{
		if(x[i]>x[xpos])      //if(x[i]<x[npos])
			xpos=i;       //npos=i;
	}
	printf("\nMax Value:%d",x[xpos]); //printf("\nMin Value:%d",x[npos]);
	printf("\nMax Position:%d",xpos); //printf("\nMin Position:%d", npos);
	getch();
	return;
}
