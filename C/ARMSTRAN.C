//To display Armstrong No. of range 100-1000.
#include<stdio.h>
#include<conio.h>
void main()
{
	int no, tmp, dig,tot=0;
	clrscr();
	for(no=100;no<1000; no++)
	{
		tmp=no;tot=0;
		while(tmp>0)
		{
			dig=tmp%10;
			tot=tot+(dig*dig*dig);
			tmp/=10;
		}
		if(no==tot)
			printf("\nArmstrong No:%d", no);
	}
	getch();
	return;
}
