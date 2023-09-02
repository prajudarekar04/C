//To convert inputted string to upper case.
#include<stdio.h>
#include<conio.h>
void main()
{
	char p[50];
	int i=0;
	clrscr();
	printf("\nEnter String:");
	gets(p);
	while(p[i]!='\0')
	{
		if(p[i]>=97&&p[i]<=122)
			p[i]=p[i]-32;
		i++;
	}
	puts(p);
	getch();
	return;
}