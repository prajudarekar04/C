//Find out max. from 2 inputted nos.
#include<stdio.h>
#include<conio.h>
void main()
{
	int p,q;
	clrscr();
	printf("\nEnter Two No:");
	scanf("%d %d",&p,&q);
	if(p>q)
		printf("\nMax No:%d",p);
	else
		printf("\nMax No:%d",q);
	getch();
	return;
}

//Other Method:-
//void main()
//{
//	int p,q,max;
//	clrscr();
//	printf("\nEnter 2 Nos.");
//	scanf("%d %d",&p,&q);
//	if(p>q)
//		max=p;
//	else
//		max=q;
//	printf("\nMax No.:%d", max);
//	getch();
// 	return;
//}