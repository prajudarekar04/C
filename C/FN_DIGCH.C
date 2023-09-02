#include<stdio.h>
#include<conio.h>
void main()
{
	int res;
	char ch;
	int isDigit(char);
	clrscr();
	printf("\nType a character:");
	scanf("%c",&ch);
	res=isDigit(ch);
	if(res==1)
		printf("\nDigit Character.");
	else
		printf("\nOther Character.");
	return;
}
int isDigit(char)
{
	return(a>=48&&a<=57);
}