#include<stdio.h>
#include<conio.h>
void main()
{
	void reverse();
	clrscr();
	reverse();
	return;
}
void reverse()
{
	int no,r=0;
	printf("\nEnter No:");
	scanf("%d",&no);
	while(no>0)
	{
		r=r*10+(no%10);
		no/=10;
	}
	printf("\nReverse No:%d",r);
	getch();
	return;
}