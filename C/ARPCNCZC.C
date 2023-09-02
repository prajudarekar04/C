//To update an array of 10 integer & count no. of +ve, -ve & 0's.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i=0,pc=0,nc=0,zc=0;
	clrscr();
	printf("\nArray Data");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
		if(x[i]>0)
			pc++;
		else
		{
			if(x[i]<0)
				nc++;
			else
				zc++;
		}
	}
	clrscr();
	printf("\nArray Data\n");
	for(i=0;i<10;i++)
		printf("%4d",x[i]);
	printf("\nPositive:%d\nNegative:%d\nZero's:%d",pc,nc,zc);
	getch();
	return;
}