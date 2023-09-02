#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char nm;
	double mrk;
}
main()
{
	struct student a,*b;
	b=&a;
	clrscr();
	printf("\nRoll No:");
	scanf("%d",b->rno);
	printf("\nName:");
	scanf("%s",b->nm);
	printf("\nMark:");
	scanf("%lf",b->mrk);
	clrscr();
	printf("\nRecord\nRoll No:%d\nName:%s\nMark:%lf",b->rno,b->nm,b->mrk);
	getch();
	return;
}