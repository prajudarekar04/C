//To convert int string to int value.
#include<stdio.h>
#include<conio.h>
void main()
{
	char p[40];
	int i=0,val,no=0;
	clrscr();
	printf("\nInteger String:");
	scanf("%s",&p);
	while(p[i]!='\0')
	{
		if(p[i]<48||p[i]>57)
			break;
		val=p[i]-48;
		no=no*10+val;
		i++;
	}
	if(p[i]!='\0')
		printf("\nInvalid String");
	else
		printf("\nNo:%d",no);
	getch();
	return;
}