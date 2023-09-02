#include<stdio.h>
#include<conio.h>
int length()
{
	char a[50];
	printf("\nString:");
	gets(a);
	return strlen(a);
}
void main()
{
	int res;
	int(*aptr)();
	clrscr();
	aptr=length;
	res=(*aptr)();
	printf("\nLength:%d",res);
	getch();
	return;
}