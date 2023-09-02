#include<stdio.h>
#include<conio.h>
void main()
{
	int isDigit();
	clrscr();
	if(isDigit()==1)
		printf("\nDigit");
	else
		printf("\nOther");
	printf("Character");
	getch();
	return;
}
int isDigit()
{
	char ch;
	printf("\nCharacter:");
	scanf("%c",&ch);
	return(ch>='0'&&ch<='9');
}