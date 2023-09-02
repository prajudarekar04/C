#include<stdio.h>
#include<conio.h>
void main()
{
	int isBinary (long int);
	long int bno;
	int res;
	printf("\nEnter Binary No:");
	scanf("%ld",&bno);
	res=isBinary(bno);
	if(res==1)
		printf("\nBinary No");
	else
		printf("\nNot Binary No");
	getch();
	return;
}
int isBinary(long int a)
{
	long int a;
	while(a>0)
	{
		if((a%10)>1)
			break;
		a/=10;
	}
	if(a==0)
		return 1;
	else
		return 0;
}