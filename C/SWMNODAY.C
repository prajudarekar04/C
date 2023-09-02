#include<stdio.h>
#include<conio.h>
void main()
{
	int mno,days;
	clrscr();
	printf("\nMonth No:");
	scanf("%d",&mno);
	if(mno<1||mno>12)
	{
		printf("\nInvalid Input");
		return;
	}
	switch(mno)
	{
		case 2:
			days=28;	break;
		case 4:
		case 6:
		case 9:
		case 11:
			days=30;        break;
		default:
			days=31;	break;
	}
	printf("\nThere are %d days in month no. %d", days,mno);
	getch();
	return;
}