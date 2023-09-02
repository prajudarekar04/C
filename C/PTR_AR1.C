#include<stdio.h>
#include<conio.h>
void main()
{
	int x[i],i=0;
	clrscr();
	printf("\nArray data:");
	while(i<5)
	{
		scanf("%d",(x+i));
		i++;
	}
	printf("\nData\n");
	for(i=0;i<5;i++)
		printf("%4d",*(x+i));
	getch();
	return;
}