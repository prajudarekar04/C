#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10], i=0, l, r, mid,sv;
	clrscr();
	printf("\nArray Data:");
	while(i<10)
	{
		scanf("%d",&x[i]);
		if(i>0)
		{
			if(x[i]<x[i-1])
			{
				printf("\nInvalid Data.");
				continue;
			}
		}
		i++;
	}
	printf("\nSearch Value:");
	scanf("%d",&sv);
	i=0;r=9;
	do
	{
		mid=(l+r)/2;
		if(sv==x[mid])
			break;
		if(sv<x[mid])
			r=mid-1;
		else
			r=mid+1;
	}while(l<=r);
	if(l>r)
		printf("\nNot Found.");
	else
		printf("\nFound.");
	getch();
	return;
}