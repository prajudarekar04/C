//To check inputted character is hexadecimal alphabet('A'-'F')
//or hexdecimal digit('0'-'9') or other.
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\nEnter Character:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='F')
		printf("\nHex Alphabet:");
	else
	{
		if(ch>='0'&&ch<='9')
		  printf("\n Hex Digit");
		else
		printf("\n Within Character");
	}
	getch();
	return;
}