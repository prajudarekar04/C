//scanf()
//To input character, to scan & display.
#include<stdio.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	int no;
	clrscr();
	printf("\nType a character:");
	scanf("%c", &ch);
	printf("\nEnter No:");
	scanf("%d", &no);
	printf("\nCharacter: %c\nNo: %d", ch, no);
	getch();
	return;
}