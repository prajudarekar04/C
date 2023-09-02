//To update an array of 10 int & find out max.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i=0,max;  //int x[10],i=0,min;
	clrscr();
	printf("\nEnter Nos.:\n");
	for(i=0;i<10;i++)
		scanf("%d",&x[i]);
	for(max=x[0],i=1;i<10;i++)
	{
		if(x[i]>max)                    //if(x[i]<min
			max=x[i];                     //min=x[i]
	}
	printf("\nMax Value:%d", max);          //printf("\nMin Value:%d",min);
	getch();
	return;
}