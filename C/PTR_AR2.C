#include<stdio.h>
#include<conio.h>
void main()
{
	int x[i],i=0;
	int *p=x;
	clrscr();
	printf("\nArry data:");
	while(i<5)
	{
		scanf("%d",(p+i));
		i++;
	}
	printf("\nData\n");
	for(i=0;i<5;i++)
		printf("%4d",*(p+i));
	getch();
	return;
}