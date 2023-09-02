#include<stdio.h>
#include<conio.h>
typedef struct book
{
	int bno;
	char bnm[15];
	int bprice;
}Book;
//fn. to update book dat type
void update(book*a,int n)
{
	a->bno=n;
	printf("\nBook Name:");
	scanf("%s",a->bnm);
	printf("\nBook Price:");
	scanf("%d",&a->bprice);
}
//fn. to display book data
void display(Book p)
{
	printf("\nBook Data:%d\nName:%s\nPrice:%d",p.bno,p.bnm,p.bprice);
}