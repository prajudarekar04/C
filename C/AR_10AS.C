//To obtain array of 10 int in ascending order.
#include<stdio.h>
#include<conio.h>
void main()
{
	 int x[10],i=0;
	 clrscr();
	 printf("\nArray Data:");
	 while(i<10)
	 {
		scanf("%d",&x[i]);
		if(i>0)
		{
			if(x[i]<x[i-1])
			{
				printf("\nInvalid data.");
				continue;
			}
		}
		i++;
	 }
	 printf("\nArray Data:");
	 for(i=0;i<10;i++)
		printf("%4d",x[i]);
	 getch();
	 return;
}