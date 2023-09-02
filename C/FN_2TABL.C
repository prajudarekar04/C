#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	void table(int);
	clrscr();
	printf("\nEnter No:");
	scanf("%d",&no);
	table(no);
	getch();
	return;
}
void table(int k)
{
	int i=1;
	printf("\nTable");
	while(i<=10)
	{
		printf("%4d",k*i);
		i++;
	}
	return;
}