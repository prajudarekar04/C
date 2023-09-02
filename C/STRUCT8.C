#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct marks
{
	int rno;
	int nos;
	int *ptr[];
}MRK;
typedef struct result
{
	int rno;
	int tot;
	int avg;
}RES;
void inputMRK(MRK*a)
{
	int i;
	printf("\nRoll No:");
	scanf("%d",&a->rno);
	printf("\nSubject Count:");
	scanf("%d",&a->nos);
	a->ptr=(int*)malloc(a->nos*sizeof(int));
	printf("\nMarks:");
	for(i=0;i<a->nos;i++)
		scanf("%d",(a->ptr+i));
}
void displayMRK(MRK*a)
{
	int i;
	printf("\nRoll No:%d",a->rno);
	printf("\nMarks:");
	for(i=0;i<a->nos;i++)
		scanf("%4d",*(a->ptr+i));
}
void displayRES(RES*b)
{
	printf("\nRoll No:%d",b->rno);
	printf("\nTotal:%d",b->tot);
	printf("\nAvg:%d",b->avg);
}
void convert(RES*b,MRK*a)
{
	int i;
	b->rno=a->rno;
	b->tot=0;
	for(i=0;i<a->nos;i++)
		b->tot+=a->ptr[i];
	b->avg=b->tot/a->nos;
}
void main()
{
	MRK p;
	RES q;
	clrscr();
	inputMRK(&p);
	convert(&p,&q);
	displayMRK(&p);
	displayRES(&q);
	getch();
	return;
}