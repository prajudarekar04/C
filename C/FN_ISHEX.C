#include<stdio.h>
#include<conio.h>
void main()
{
	void isHex();
	clrscr();
	isHex();
	return;
}
void isHex()
{
	int no,i=0;
	char s[50];
	printf("\nString:");
	scanf("%d",&no);
	while(s[i]!='\0')
	{
		if((s[i]>=48&&s[i]<=57)||(s[i]>='A'&&s[i]<='F'))
		i++;
		else
			break;
	}
	if(s[i]=='\0')
		printf("\nHex String");
	else
		printf("\nOther string");
	getch();
	return;
}

