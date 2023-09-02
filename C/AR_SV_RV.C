//Write a program to find out an array of 10 integer.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i=0,sv,rv;
	clrscr();
	printf("\nArray Data\n");
	while(i<10)
	{
		scanf("%d",&x[i]);
		i++;
	}
	clrscr();
	printf("\nBefore Processing\n");
	for(i=0;i<10;i++)
		printf("%4d",x[i]);
	printf("\nSearch Value:");
	scanf("%d",&sv);
	printf("\nReplace Value:");
	scanf("%d",&rv);
	for(i=0;i<10;i++)
	{
		if(x[i]==sv)
			x[i]=rv;
	}
	printf("\nArray Data\n");
	for(i=0;i<10;i++)
		printf("%4d",x[i]);
	getch();
	return;
}
