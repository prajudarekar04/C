#include<stdio.h>
#include<conio.h>
void main()
{
	long int rev(int);
	long int ans;
	int no;
	clrscr();
	printf("\nEnter No.");
	scanf("%d",&no);
	ans=rev(no);
	printf("\nReverse No.:%ld",ans);
	getch();
	return;
}
long int rev(int a)
{
	long int r=0;
	while(a>0)
	{
		r=r*10+(a%10);
		a/=10;
	}
	return r;
}