#include<stdio.h>
#include<conio.h>
void main()
{
	int findFibovalues();
	clrscr();
	printf("\nFibonicci Series Value:%d",findFibovalues());
	getch();
	return;
}
int findFibovalues()
{
	int i=1,a=-1,b=1,n,c;
	printf("\nEnter the term:");
	scanf("%d",&n);
	while(i<=n)
	{
	c=a+b;
	a=b;
	b=c;
	i++;
	}
	return c;
}