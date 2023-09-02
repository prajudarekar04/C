#include<stdio.h>
#include<conio.h>
int digsum()
{
	int no,sum=0;
	printf("\nEnter No:");
	scanf("%d",&no);
	while(no>0)
	{
		sum+=(no%10);
		no/=10;
	}
	return sum;
}
void main()
{
	int res;
	int(*aptr)();
	clrscr();
	aptr=digsum;
	res=(*aptr)();
	printf("\nDigsum:%d",res);
	getch();
	return;
}