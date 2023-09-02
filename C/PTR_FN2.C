#include<stdio.h>
#include<conio.h>
int length()
{
	long int no,len=0;
	printf("\nEnter No:");
	scanf("%ld",&no);
	while(no>0)
	{
		len++;
		no/=10;
	}
	return len;
}
void main()
{
	long int res;
	long int(*aptr)();
	clrscr();
	aptr=length;
	res=(*aptr)();
	printf("\nLength:%d",res);
	getch();
	return;
}