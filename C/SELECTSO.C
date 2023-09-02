#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i,j,pos,tmp;
	clrscr();
	printf("\nArray Data:");
	for(i=0;i<5;i++)
		scanf("%d",&x[i]);
	printf("\nBefore Sorting:");
	for(i=0;i<5;i++)
		printf("%4d",x[i]);
	for(i=0;i<4;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(x[j]<x[pos])
				pos=j;
		}
		if(i!=pos)
		{
			tmp=x[i];
			x[i]=x[pos];
			x[pos]=tmp;
		}
	}
	printf("\nAfter Sorting:");
	for(i=0;i<5;i++)
		printf("%4d",x[i]);
	getch();
	return;
}