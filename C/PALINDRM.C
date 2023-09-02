//To check inputted is a Palindrome no.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x, dig, tmp, rev=0;
	clrscr();
	printf("\n Enter No:");
	scanf("%d", &x);
	tmp=x;
	while(x>0)
	{
		dig=x%10;
		rev=rev*10+dig;
		x=x/10;
	}
	if(rev==tmp)
		printf("\n palindrome");
	else
		printf("\n Not Palindrome");
	getch();
	return;
}