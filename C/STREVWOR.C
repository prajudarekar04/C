//To rev each word.
#include<stdio.h>
#include<conio.h>
void main()
{
	char p[40],ch;
	int i=0,sp=0,ep=0;
	clrscr();
	printf("\nString:");
	gets(p);
	while(1)
	{
		if(p[i]==32||p[i]=='\0')
		{
			ep=i-1;
			while(sp<ep)
			{
				ch=p[sp];
				p[sp]=p[ep];
				p[ep]=ch;
				sp++;ep--;
			}
			if(p[i]=='\0')
				break;
			sp=i+1;
		}
		i++;
	}
	puts(p);
	getch();
}