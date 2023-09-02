#include<stdio.h>
#include<conio.h>
void main()
{
	int no,res;
	int isPrime(int);
	clrscr();
	printf("\nEnter No:");
	scanf("%d",&no);
	res=isPrime(no);
	if(res==1)
		printf("\nPrime");
	else
		printf("\nNot Prime");
	return;
}
int isPrime(int a)
{
	int i=2;
	while(i<a)
	{
		if(a%i==0)
			break;
		i++;
	}
	return(i==a);
}