#include<stdio.h>
#include<conio.h>
void main()
{
	char p[40];
	int i=0,sp=0,ep=0,len=0,max=0;
	clrscr();
	printf("\nString:");
	gets(p);
	while(1)
	{
		if(p[i]==32||p[i]=='\0')
		{
			ep=i;
			len=ep-sp;
			if(len>max)
				max=len;
			if(p[i]=='\0')
				break;
			sp=i+1;
		}
		i++;
	}
	printf("\nMax Length:%d",max);
	getch();
	return;
}