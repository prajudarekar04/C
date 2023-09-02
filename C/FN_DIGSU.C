#include<stdio.h>
#include<conio.h>
void main()
{
	void digitsum();
	clrscr();
	digitsum();
	return;
}
void digitsum()
{
	int no,sum=0;
	printf("\nEnter No:");
	scanf("%d",&no);
	while(no>0)
	{
		sum+=no%10;
		no/=10;
	}
	printf("\n Digitsum:%d",sum);
	getch();
	return;
}

