#include<stdio.h>
#include<conio.h>
void main()
{
	int i, mf=1, val, dno=0;
	char p[15],ch;
	clrscr();
	printf("\nOctal String:");
	scanf("%s",&p);
	i=strlen(p)-1;
	while(i>=0)
	{
		ch=p[i];
		if(ch<'0'||ch>'7')
			break;
		val=ch-48;
		dno=dno+mf*val;
		mf*=8;
		i--;
	}
	if(i==-1)
		printf("\nDecimal Number:%d",dno);
	else
		printf("\nInvalid String");
	getch();
	return;
}