#include<stdio.h>
#include<conio.h>
void main()
{
	int no,res;
	int oddeven(int);
	clrscr();
	printf("\nEnter No:");
	scanf("%d",&no);
	res=oddeven(no);
	if(res==0)
		printf("\nEven");
	else
		printf("\nOdd");
	getch();
	return;
}
int oddeven(int a)
{
	return(a%2);
}