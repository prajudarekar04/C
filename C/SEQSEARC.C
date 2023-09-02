//To impliment sequential search for an array of 10 integer.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10], i=0, sv;
	clrscr();
	printf("\nArray Data\n");
	for(i=0;i<10;i++)
		scanf("%d",&x[i]);
	printf("\nSearch Value:");
	scanf("%d", &sv);
	for(i=0;i<10;i++)
	{
		if(x[i]==sv)
			break;
	}
	if(i==10)
		printf("\nNot Found.");
	else
		printf("\nFound.");
	getch();
	return;
}