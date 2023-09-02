//To copy source string to decimal string.
//p Welcome i/p
//q Welcome o/p
#include<stdio.h>
#include<conio.h>
void main()
{
	char p[50],q[50];
	int i=0;
	clrscr();
	printf("\nString: ");
	gets(p);
	while(p[i]!='\0')
	{
		q[i]=p[i];
		i++;
	}
	q[i]='\0';
	puts(p);
	puts(q);
	getch();
	return;
}