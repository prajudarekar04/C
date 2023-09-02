#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0,sp=0;
	char p[50],q[50];
	clrscr();
	printf("\nString:");
	gets(p);
	while(1)
	{
		if(p[i]==32)
		{
			q[j++]=p[sp];
			q[j++]='.';
			sp=i+1;
		}
		else
		{
			if(p[i]='\0')
				break;
		}
		i++;
	}
	while(p[sp]!='\0')
	{
		q[j++]=p[sp];
		sp++;
	}
	q[j]='\0';
	puts(p);
	puts(q);
	getch();
	return;
}