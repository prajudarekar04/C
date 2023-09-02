#include<stdio.h>
#include<conio.h>
int isAlphanumeric(char k[])
{
	int i=0;
	while(k[i]!='\0')
	{
		if((k[i]>=65&&k[i]<=90)||(k[i]>=97&&k[i]<=122)||(k[i]==32)||(k[i]>='0'&&k[i]<='9'));
			i++;
		else
			break;
	}
	return(k[i]=='\0');
}
void main()
{
	char p[20];
	int res;
	clrscr();
	printf("\nString:");
	scanf("%s",p);
	res=isAlphanumberic();
	if (res==0)
		printf("\nOther String");
	else
		printf("\nAlphanumeric");
	getch();
	return;
}
