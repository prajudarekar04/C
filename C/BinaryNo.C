//To check inputted no. is binary no.
#include<stdio.h>
#include<conio.h>
void main()
{
	long int no;
	int dig;
	clrscr();
	printf("\nEnter No:");
	scanf("%ld",&no);
	while(no>0)
	{
		dig=no%10;
		if(dig>1)
			break;
		no/=10;
	}
	if(no>0)
		printf("\nNot Binary");
	else
		printf("\nBinary");
	getch();
	return;
}