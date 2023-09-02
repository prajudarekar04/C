#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int res;
	void input(int*,int);
	void display(int*,int);
	int total(int*,int);
	clrscr();
	input(a,5);
	display(a,5);
	res=total(a,5);
	printf("\nSum:%d",res);
	getch();
	return;
}
void input(int*p,int n)
{
	int i=0;
	printf("\nEnter Nos.:");
	while(i<n)
	{
		scanf("%d",(p+i));
		i++;
	}
}
void display(int*q,int n)
{
	int i=0;
	printf("\nData");
	while(i<n)
	{
		printf("%4d",*(q+i));
		i++;
	}
}
int total(int*p,int n)
{
	int tot=*(p+0);
	int i=1;
	while(i<n)
	{
		tot+=*(p+i);
		i++;
	}
	return tot;
}