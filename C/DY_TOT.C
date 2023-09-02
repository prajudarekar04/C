#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int n,tot,*ptr;
	int *allocate(int);
	void input(int*,int);
	void display(int*,int);
	int calctot(int*,int);
	printf("\nInformation Count:");
	scanf("%d",&n);
	ptr=allocate(n);
	input(ptr,n);
	display(ptr,n);
	tot=calctot(ptr,n);
	printf("\nTotal:%d",tot);
	printf("\nAvg:%d",tot/n);
	free(ptr);
	getch();
	return;
}
int *allocate(int n)
{
	return(int *)malloc(n*sizeof(int));
}
void input(int*a,int n)
{
	int i=0;
	printf("\nData:\n");
	while(i<n)
	{
		scanf("%d",(a+i));
		i++;
	}
}
void display(int*a,int n)
{
	int i=0;
	printf("\nData:\n");
	while(i<n)
	{
		printf("%4d",*(a+i));
		i++;
	}
}
int calctot(int*b,int n)
{
	int tot=*(b+0),i=1;
	while(i<n)
	{
		tot+=*(b+i);
		i++;
	}
	return tot;
}