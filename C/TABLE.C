// need to do lot of changes
















#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j=1,p,q;
	clrscr();
	while(j<=10)
	{
		printf("\nEnter no:");
		scanf("%d", &p);
		printf("\n Table\n");
		while(i<=10)
		{
			printf("%5d", p*i);
			printf("\n");i++;
			p=p++;
		}
		j++;
	}
	getch();
	return;
}
