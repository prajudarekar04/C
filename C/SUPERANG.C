#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,no,tmp,dig;
	clrscr();
	for(no=10;no<100;no++)
	{
		tmp=no;
		i=2;
		while(i<tmp)
		{
			if(tmp%i==0)
				break;
			i++;
		}
		if(i<tmp||i>tmp)
			printf("Not Prime:%d ",no);
		else
		{
			while(tmp>0)
			{
				dig=tmp%10;
				if(dig==2||dig==3||dig==5||dig==7)
					tmp/=10;
				else
					break;
			}
			if(tmp>0)
				printf("Prime:%d ",no);
			else
				printf("Superprime:%d ",no);
		}
	}
	getch();
	return;
}