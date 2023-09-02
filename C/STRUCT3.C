#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char nm;
	double mrk;
};
void input(struct student *b)
{
	printf("\nRoll No:");
	scanf("%d",&b->rno);
	printf("\nName:");
	scanf("%s",&b->nm);
	printf("\nMark:");
	scanf("%lf",&b->mrk);
}
void display(struct student *b)
{
	printf("\nRecord\nRoll No:%d\nName:%s\nMark:%lf",b->rno,b->nm,b->mrk);
}
main()
{
	struct student a;
	clrscr();
	input(&a);
	display(&a);
	getch();
	return;
}