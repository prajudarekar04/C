#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct marks
{
	int phy;
	int chem;
	int mat;
}MRK;
typedef struct result
{
	int rno;
	MRK mr;
}RES;
void main()
{
	RES k;
	int tot=0;
	printf("\nRoll No.:");
	scanf("%d",&k.rno);
	printf("\nMarks\nPhy.:");
	scanf("%d",&k.mr.phy);
	printf("\nChem.:");
	scanf("%d",&k.mr.chem);
	printf("\nMaths.:");
	scanf("%d",&k.mr.mat);
	clrscr();
	printf("\nRoll No:%d\nMarks\nPhy:%d\nChem:%d\nMat:%d",k.rno,k.mr.phy,k.mr.chem,k.mr.mat);
	tot=k.mr.phy+k.mr.chem+k.mr.mat;
	printf("\ntotal:%d",tot);
	getch();
	return;
}

