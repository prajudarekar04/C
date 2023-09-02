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
	struct student a;
	clrscr();
	printf("\nRoll No:");
	scanf("%d",&a.rno);
	printf("\nName:");
	scanf("%s",&a.nm);
	printf("\nMark:");
	scanf("%lf",&a.mrk);
	clrscr();
	printf("\nRecord\nRoll No:%d\nName:%s\nMark:%lf",a.rno,a.nm,a.mrk);
	getch();
	return;
}