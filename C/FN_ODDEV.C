#include<stdio.h>
void main()
{
	int oddeven();
	clrscr();
	if(oddeven()==1)
		printf("\nOdd No.");
	else
		printf("\nEven No.");
	getch();
	return;
}
int oddeven()
{
	int no;
	printf("\nEnter No:");
	scanf("%d",&no);
	return(no%2);
}