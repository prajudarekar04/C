//To draw character 'H'.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,mid;
	clrscr();
	printf("\n Line Count:");
	scanf("%d", &n);
	{
		if(n%2==0)
			n++;
		mid=(n+1)/2;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(j==1||j==n||i==mid)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	getch();
	return;
}