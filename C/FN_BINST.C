#include<stdio.h>
#include<conio.h>
void main()
{
	int isBinaryString();
	clrscr();
	if(isBinaryString())
		printf("\n Binary String");
	else
		printf("\n Not Binary String");
	getch();
	return;
}
int isBinaryString()
{
	char p[20];
	int i=0;
	printf("\n Binary String:");
	scanf("%s",&p);
	while(p[i]!='\0')
	{
		if(p[i]==48||p[i]==49)
			i++;
		else
			break;
	}
	return(p[i]=='\0');
}