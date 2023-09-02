//To reverse the inputted array.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i=0,j=0,tmp;
	clrscr();
	printf("\nArray Data\n");
	while(i<10)
	{
		scanf("%d",&x[i]);
		i++;
	}
	printf("\nOutput 1\n");
	for(i=0;i<10;i++)
		printf("%4d",x[i]);
	for(i=0,j=9;i<j;i++,j--)
	{
		tmp=x[i];
		x[i]=x[j];
		x[j]=tmp;
	}
	printf("\nAfter Processing\n");
	for(i=0;i<10;i++)
		printf("%4d",x[i]);
	getch();
	return;
}
