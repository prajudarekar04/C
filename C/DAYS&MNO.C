//To find out no. days from a month.
#include<stdio.h>
#include<conio.h>
void main()
{
	int mno, days;
	clrscr();
	printf("\n Month No:");
	scanf("%d", &mno);
	if(mno<1||mno>12)
	{
		printf("\n Invalid Month");
		return;
	}
	if(mno==2)
		days=28;
	else
	{
		if(mno==4||mno==6||mno==9||mno==11)
			days=30;
		else
			days=31;
	}
	printf("\nThere are %d days in month no. %d", days,mno);
	getch();
	return;
}