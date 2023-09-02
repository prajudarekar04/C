#include<stdio.h>
#include<conio.h>
void main()
{
	int length(int);
	int no;
	clrscr();
	printf("\nEnter No:");
	scanf("%d",&no);
	printf("\nLength");
	scanf("%d", length(no));
	getch();
	return;
}
int length(int d)
{
	int cnt=0;
	while(d>0)
	{
		cnt++;
		d/=10;
	}
	return cnt;
}