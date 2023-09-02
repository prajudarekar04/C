//
#include<stdio.h>
#include<conio.h>
void main()
{
	char p[50];
	int i=0;
	clrscr();
	printf("\nEnter String:");
	gets(p);
	printf("\nOutput\n");
	while(p[i]!='\0')
		printf("%c",p[i++]);
	getch();
	return;

}