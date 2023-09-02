#include<stdio.h>
#include<conio.h>
void main()
{
	int x, tot=0, flg=1;
	clrscr();
	while(flg)
	{
		printf("\n Enter No:");
		scanf("%d", &x);
		if(x==0)
			flg=0;
		else
			tot+=x;
	}
	printf("\nsum:%d", tot);
	getch();
	return;
}