#include<stdio.h>
#include<conio.h>
int oddeven(int n)
{
	return n%2;
}
int digitsum(int n)
{
	int tot;
	while(n>0)
	{
		tot+=(n%10);
		n/=10;
	}
	return tot;
}
int rev(int n)
{
	int r=0;
	while(n>0)
	{
		r=r+10*(n%10);
		n/=10;
	}
	return r;
}
int isPalin(int n)
{
	return (rev(n)==n);
}
int isPrime(int n)
{
	int i=2;
	while(i<n)
	{
		if(n%i==0)
			break;
		i++;
	}
	return (i==n);
}
void main()
{
	int opt,n;
	int(*ptr)(int);
	while(1)
	{
		printf("\nMenu\n1.Enter No.\n2.DigitSum\n3.Reverse\n4.Palindrome\n5.Prime\n6.OddEven\n7.Exit\nChoice:");
		scanf("%d",&opt);
		if(opt>6)
			break;
		switch(opt)
		{
			case 1:
				printf("\nEnter No.");
				scanf("%d",&n);
				break;
			default:
				switch(opt)
				{
					case 2:
						ptr=digitsum;
						break;
					case 3:
						ptr=rev;
						break;
					case 4:
						ptr=isPalin;
						break;
					case 5:
						ptr=isPrime;
						break;
					case 6:
						ptr=oddeven;
						break;
				}
				res=(*ptr)(n);
				switch(opt)
				{
					case 2:
						printf("\nDigitSum:%d",res);
						break;
					case 3:
						printf("\nReverse:%d",res);
						break;
					case 4:
						if(res==0)
							printf("\nNot");
						printf("Palin");
						break;
					case 5:
						if(res==0)
							printf("\nNot");
						printf("Prime");
						break;
					case 6:
						if(res==0)
							printf("\nEven");
						else
							printf("\nOdd");
						break;
				}
		}
	}
}