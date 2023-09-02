#include<stdio.h>
#include<conio.h>
void main()
{
	void swap(int*,int*);
	void input(int*);
	void display(int);
	int x[5],i,j;
	for(i=0;i<5;i++)
		input(&x[i]);
	printf("\nOutput\n");
	for(i=0;i<5;i++)
		display(x[i]);
	for(i=0,j=4;i<j;i++,j--)
		swap(&x[i],&x[j]);
	printf("\nOutput\n");
	for(i=0;i<5;i++)
		display(x[i]);
	getch();
	return;
}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
void input(int*a)
{
	printf("\nEnter No.:");
	scanf("%d",a);
}
void display(int b)
{
	printf("%4d",b);
}