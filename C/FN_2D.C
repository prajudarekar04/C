#include<stdio.h>
#include<conio.h>
void main()
{
	int x[3][3],i,j;
	void display(int [][3],int,int);
	clrscr();
	printf("\nMatrix Data\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nx[%d][%d]:",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	display(x,3,3);
	getch();
	return;
}
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