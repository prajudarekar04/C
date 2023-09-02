#include<stdio.h>
#include<conio.h>
void main()
{
	char p[50];
	int i=0,sp=0;
	clrscr();
	printf("\nString:");
	gets(p);
	printf("\nOutput");
	while(1)
	{
		if(p[i]==32||p[i]=='\0')
		{
			printf("\n%d",sp);
			if(p[i]=='\0')
				break;
			sp=i+1;
		}
		i++;
	}
	getch();
	return;
}