//Reverse Order.
#include<stdio.h>
#include<conio.h>
void main()
{
	char p[50];
	int i,j,tmp;
	clrscr();
	printf("\nString: ");
	gets(p);
	i=0;
	j=strlen(p)-1;
	while(i<j)
	{
		tmp=p[i];
		p[i]=p[j];
		p[j]=tmp;
		i++;j--;
	}
	puts(p);
	getch();
	return;
}