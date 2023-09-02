#include<stdio.h>
#include<conio.h>
void main()
{
	void length();
	clrscr();
	length();
	return;
}
void length()
{
	int no,cnt=0;
	printf("\nEnter No:");
	scanf("%d",&no);
	while(no>0)
	{
		cnt++;
		no/=10;
	}
	printf("\nDigit Count:%d",cnt);
	getch();
	return;
}

