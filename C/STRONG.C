#include<stdio.h>
#include<conio.h>
void main()
{
	int no, tmp, dig, fact, tot=0;
	clrscr();
	for(no=100;no<=999;no++)
	fo
	{
		dig=tmp%10;
		for(fact=dig--;dig>1;dig--)
			fact*=dig;
		tot+=fact;
	}
	if(no==tot)
		printf("Strong No");
	else
		printf("Not Strong No");
	getch();
	return;
}