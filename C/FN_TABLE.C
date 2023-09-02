#include<stdio.h>
#include<conio.h>
void main()
{
	void table();
	clrscr();
	table();
	return;
}
void table()
{
	int i=1,no;
	printf("\nEnter No:");
	scanf("%d",&no);
	printf("\nTable");
	for(i=0;i<=10;i++)
		printf("\n%5d",no*i);
	getch();
	return;
}