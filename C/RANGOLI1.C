//Rangoli 1
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1, j=1, n=5;
	clrscr();
	for(i=1; i<=n; i++)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
	}
	getch();
	return;
}