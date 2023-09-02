#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1, a, b, c;
	clrscr();
	printf("Enter Two No:");
	scanf("%d %d",&a,&b);
	while(i<=10)
	{
		c=a+b;
		printf("%4d",c);
		a=b;
		b=c;
		i++;
	}
	getch();
	return;
}