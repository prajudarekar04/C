#include<stdio.h>
#include<conio.h>
void main()
{
	int no,base,rem,i=0,j=0;
	char p[20],ch;
	clrscr();
	printf("\nDecimal No.");
	scanf("%d",&no);
	printf("\nBase\n2-Binary\n8-Octal\n10-Decimal\n16-Hexadecimal\nChoice:");
	scanf("%d",&base);
	while(no>0)
	{
		rem=no%base;
		if(rem<10)
			ch=(char)(48+rem);
		else
			ch=(char)(55+rem);
		p[j]=ch;
		no/=base;
		j++;
	}
	p[j--]='\0';
	while(i<j)
	{
		ch=p[i];
		p[i]=p[j];
		p[j]=ch;
		i++;
		j--;
	}
	switch (base)
	{
		case 2:
			printf("\nBinary:%s",p);
				break;
		case 8:
			printf("\nOctal:%s",p);
				break;
		case 10:
			printf("\nDecimal:%s",p);
				break;
		case 16:
			printf("\Hexadecimal:%s",p);
				break;
		default:
			printf("\nInvalid Base",p);
	}
	getch();
	return;
}