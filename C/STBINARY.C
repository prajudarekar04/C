//To check inputted string is Binary string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char p[40];
	int i=0;
	clrscr();
	printf("\nString: ");
	scanf("%s",p);
	while(p[i]!='\0')
	{
		if(p[i]=='0'||p[i]=='1')
			i++;
		else
			break;
	}
	if(p[i]=='\0')
		printf("\nBinary String.");
	else
		printf("\nOther String.");
	getch();
	return;
}