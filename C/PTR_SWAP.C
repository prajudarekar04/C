#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	void swap(int*,int*);
	clrscr();
	printf("\n Enter No.:");
	scanf("%d %d",&x,&y);
	printf("\nBefore Swapping");
	printf("%d %d",x,y);
	swap(&x,&y);
	printf("\nAfter Swapping");
	printf("%d %d",x,y);
	getch();
	return;
}
void swap()
{
	int r;
	r=*p;
	*p=*q;
	*q=r;
}