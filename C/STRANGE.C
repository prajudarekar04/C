#include<stdio.h>
#include<conio.h>
void main()
{
	int no, tmp, dig, fact, tot=0;
	clrscr();
	for(no=100;no<1000; no++)
	{
		tot=0;
		for(tmp=no;tmp>0;tmp/=10)
		{
			dig=tmp%10;
			for(fact=dig--;dig>1;dig--)
			fact*=dig;	tot+=fact;
		}
		if(tot==no)
			printf("\nStrong No:%d", no);
	}
	getch();
	return;
}