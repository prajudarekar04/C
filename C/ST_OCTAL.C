//To check inputted string Octal string.
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
		if(p[i]>='0'&&p[i]<='7')
			i++;
		else
			break;
	}
	if(p[i]=='\0')
		printf("\nOctal String.");
	else
		printf("\nOther String.");
	getch();
	return;
}