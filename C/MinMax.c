//To find out both min. & max. no. from inputted 10 nos.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,x, max, min;
	clrscr();
	while(i<=10)
	{
		printf("\n Enter No:");
		scanf("%d", &x);
		if(i==1)
			max=x, min=x;
		else
		{
			if(x<min)
				min=x;
			else
			{
				if(x>max)
					max=x;
			}
		}
		i++;
	}
	printf(" \n Max:%d ,Min:%d" , max, min);
	getch();
	return;
}
