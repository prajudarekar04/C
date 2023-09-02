#include<stdio.h>
#include<conio.h>
void main()
{
	void prime();
	clrscr();
	prime();
	return;
}
void prime()
{
	int no,i=2;
	printf("\nEnter No:");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
			break;
		i++;
	}
	if(i==no)
		printf("\nPrime No");
	else
		printf("\nNot Prime");
	getch();
	return;
}