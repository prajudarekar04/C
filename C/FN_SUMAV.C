#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],res,i;
	void display(int [],int);
	int total(int [],int);
	int avg(int[],int);
	clrscr();
	printf("\nData:");
	for(i=0;i<5;i++)
		scanf("%d",&x[i]);
	display(x,5);
	printf("\nTotal:%d",total(x,5));
	printf("\nAvg:%d",avg(x,5));
	getch();
	return;
}
void display(int p[],int n)
{
	int i=0;
	printf("\nData");
	while(i<n)
		printf("%4d",p[i++]);
	return;
}
int total(int p[],int n)
{
	int i=1,tot=p[0];
	while(i<n)
		tot+=p[i++];
	return tot;
}
int avg(int b[],int n)
{
	return total(b,n)/n;
}