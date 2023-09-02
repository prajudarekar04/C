//To check inputted no. is Prime Number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,no,mid;
	clrscr();
	printf("\n Enter No:");
	scanf("%d",&no);
	mid=no/2;
	do
	{
		if(no%i==0)
			break;
		i++;
	}while(i<=mid);
	if(i>mid)
		printf("\n Prime");
	else
		printf("Not Prime");
	getch();
	return;
}