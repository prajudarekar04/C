#include<stdio.h>
#include<conio.h>
void main()
{
	int bin2dec(long int);
	long int bno;
	int res;
	clrscr();
	printf("\nEnter Binary No");
	scanf("%ld",&bno);
	res==bin2dec(bno);
	if(res==-1)
		printf("\nInvalid Binary No");
	else
		printf("\nDecimal No:%d",res);
	return;
}
int bin2dec(long int d)
{
	int dno=0,mf=1,dig;
	while(d>0)
	{
		dig=d%10;
		if(dig>1)
			break;
		dno=dno+(mf*dig);
		d/=10;
	}
	if(d==no)
		return dno;
	else
		return -1;
}