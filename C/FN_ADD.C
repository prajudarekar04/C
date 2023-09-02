#include<stdio.h>
#include<conio.h>
void display(int p[][3],int r,int c)
{
	int i,j;
	printf("\nMatrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%4d",p[i][j]);
		printf("\n");
	}
	return;
}
void add(int p[][3],int q[][3],int r,int c)
{
	int s[3][3],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			s[i][j]=p[i][j]+q[i][j];
	}
	display(s,3,3);
	return;
}
void main()
{
	int a[3][3],b[3][3],i,j;
	clrscr();
	printf("\nData for matrix 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\nData for matrix 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	}
	display(a,3,3);
	display(b,3,3);
	add(a,b,3,3);
	getch();
	return;
}