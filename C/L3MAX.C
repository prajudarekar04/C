//To find out max. from 3 inputted nos.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c, max;
	clrscr();
	printf("\n Enter 3 no:");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b)
		max=a;
	else
		max=b;
	if(c>max)
		max=c;
	printf("\n Max.: %d",max);
	getch();
	return;
}

//Other Method:-
//void main()
//{
//	int a, b, c;
//	clrscr();
//	printf("\n Enter 3 no:");
//	scanf("%d %d %d", &a, &b, &c);
//	if(a>b)
//	{
//		if(a>c)
//			printf("\nMax:%d",a);
//		else
//			printf("\nMax:%d",c);
//	}
//	else
//	{
//		if(b>c)
//			printf("\n Max:%d",b);
//		else
//			printf("\n Max:%d",c);
//	}
//	getch();
//	return;
//}