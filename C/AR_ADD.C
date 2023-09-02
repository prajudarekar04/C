#include<stdio.h>
#include<conio.h>
void main()
{
	int p[3][3],q[3][3],r[3][3],i,j;
	clrscr();
	printf("\nData for matrix P\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nP[%d][%d]",i,j);
			scanf("%d",&p[i][j]);
		}
	}
	printf("\nData for matrix Q\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nQ[%d][%d]",i,j);
			scanf("%d",&q[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			r[i][j]=p[i][j]+q[i][j];
	}
	clrscr();
	printf("\nOutput");
	printf("\nMatrix P");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",p[i][j]);
		printf("\t\n");
	}
	printf("\nMatrix Q\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",q[i][j]);
		printf("\t\n");
	}
	printf("\nAddition Matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",r[i][j]);
		printf("\t\n");
	}
	getch();
	return;
}
