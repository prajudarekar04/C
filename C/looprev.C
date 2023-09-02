#include<stdio.h>
#include<conio.h>
void main()
{
	int x, dig, rev=0;
	clrscr();
	printf("\n Enter No:");
	scanf("%d", &x);
	while(x>0)
	{
		dig=x%10;
		rev=rev*10+dig;
		x=x/10;
	}
	printf("\n Rev No:%d", rev);
	getch();
	return;
}