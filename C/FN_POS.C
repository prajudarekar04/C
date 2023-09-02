#include<stdio.h>
#include<conio.h>
//fn to find max data position
int findMaxPosition(int a[],int n)
{
	int xpos=0,i=1;
	while(i<n)
	{
		if(a[i]>a[xpos])
			xpos=i;
		i++;
	}
	return xpos;
}
//fn to find min data position
int findMinPosition(int k[],int n)
{
	int npos=0,i=1;
	while(i<n)
	{
		if(k[i]<k[npos])
			npos=i;
		i++;
	}
	return npos;
}
void main()
{
	int p[10],i=0,xpos,npos;
	clrscr();
	printf("\narray data:");
	while(i<10)
	{
		scanf("%d",&p[i]);
		i++;
	}
	xpos=findMaxPosition(p,10);
	npos=findMinPosition(p,10);
	printf("\nMax Data:%d",p[xpos]);
	printf("\nMax Position:%d",xpos);
	printf("\nMin Data:%d",p[npos]);
	printf("\nMin Position:%d",npos);
	getch();
	return;
}
