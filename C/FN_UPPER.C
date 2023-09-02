#include<stdio.h>
#include<conio.h>
void main()
{
	int isUpper();
	int res;
	clrscr();
	res=isUpper();
	if(res==1)
		printf("\nUpper");
	else
		printf("\nOther");
	printf(" Character.");
	getch();
	return;
}
int isUpper()
{
	char ch;
	printf("\nCharacter:");
	scanf("%c",&ch);
	return(ch>=65&&ch<=90);
}