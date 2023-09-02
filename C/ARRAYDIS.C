//To update an array of 5 integer & display.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5], i=0;
	clrscr();
	printf("\nArray Data\n");
	while(i<5)
	{
		scanf("%d",&x[i]);
		i++;
	}
	clrscr();
	printf("\nArray Data\n");
	for(i=0;i<5;i++)
		printf("%4d", x[i]);
	getch();
	return;
}