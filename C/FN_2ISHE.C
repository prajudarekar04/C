#include<stdio.h>
#include<conio.h>
int isHex(char k[])
{
	int i=0;
	while(k[i]!='\0')
	{
		if(k[i]>=65&&k[i]<=70)
			i++;
		else
		{
			if(k[i]>='0'&&k[i]<='9')
				i++;
			else
				break;
		}
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
	res=isHex(p);
	if(res==0)
		printf("\nNot Hex");
	else
		printf("\nHex");
	getch();
	return;
}