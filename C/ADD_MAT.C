#include<stdio.h>
#include<conio.h>
void main()
{
	int p[3][2],q[3][3],r[3][3];
	int i,j;
	clrscr();
	printf("\nData for Matrix p :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\np[%d][%d]:",i,j);
			scanf("%d",&p[i][j]);
		}
	}
	printf("\nData for Matrix q :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nQ[%d][%d]:",i,j);
			scanf("%d",&q[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			r[i][j]=p[i][j]+q[i][j];
	}
	clrscr();
	printf("\nOutput :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",p[i][j]);
		printf("\t");
		for(j=0;j<3;j++)
			printf("%4d",q[i][j]);
		printf("\t");
		for(j=0;j<3;j++)
			printf("%4d",r[i][j]);
		printf("\t");
	}
	getch();
	return;
}