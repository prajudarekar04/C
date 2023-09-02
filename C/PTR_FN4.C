#include<stdio.h>
#include<conio.h>
int reverse()
{
	int no,r=0;
	printf("\nEnter No:");
	scanf("%d",&no);
	while(no>0)
	{
		r=r*10+(no%10);
		no/=10;
	}
	return r;
}
void main()
{
	int res;
	int(*aptr)();
	clrscr();
	aptr=reverse;
	res=(*aptr)();
	printf("\nReverse:%d",res);
	getch();
	return;
}