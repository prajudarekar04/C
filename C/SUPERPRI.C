#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,no,tmp,dig;
	clrscr();
	printf("\n Enter No:");
	scanf("%d",&no);
	tmp=no;
	while(i<tmp)
	{
		if(tmp%i==0)
			break;
		i++;
	}
	if(i!=tmp)
		printf("\n Not Prime");
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
			printf("\n Prime");
		else
			printf("\n Superprime");
		printf("%d", no);
	}
	getch();
	return;
}