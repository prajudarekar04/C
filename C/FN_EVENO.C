#include<stdio.h>
#include<conio.h>
void main()
{
	void evenodd();
	clrscr();
	evenodd();
	getch();
	return;
}
void evenodd()
{
	int no;
	printf("\nEnter No:");
	scanf("%d",&no);
	if(no%2==0)
		printf("\nEven no");
	else
		printf("\nodd no");
	return;
}