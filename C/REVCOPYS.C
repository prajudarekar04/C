//To copy source string to destination in reverse order.
//p Welcome\0 i/p
//q emocleW   o/p
#include<stdio.h>
#include<conio.h>
void main()
{
	char p[50],q[50];
	int i,j;
	clrscr();
	printf("\nString: ");
	gets(p);
	i=0;j=strlen(p);
	q[j--]='\0';
	while(j>=0)
	{
		q[j]=p[i];
		j--;
		i++;
	}
	puts(p);
	puts(q);
	getch();
	return;
}