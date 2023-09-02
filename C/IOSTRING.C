#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	void iostring();
	clrscr();
	iostring();
	return;
}
void iostring()
{
	int i=0;
	char s[50];
	printf("\nstring");
	gets(s);
	printf("\nOutput\n");
	while(s[i]!='\0')
		printf("%c",s[i++]);
	getch();
	return;
}