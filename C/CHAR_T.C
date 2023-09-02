//To draw character 'T'.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	clrscr();
	printf("\n Line Count:");
	scanf("%d", &n);
	n=(n%2==0)?n+1:n;
	printf("\n Pattern \n");
	for(i=1;i<=n;i++)
	{
		j=1;
		while(j<=n)
		{
			if(i==1||j==n/2+1)
				printf("*");
			else
				printf(" ");
			j++;
		}
		printf("\n");
	}
	getch();
	return;
}