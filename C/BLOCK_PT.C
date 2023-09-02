#include<stdio.h>
#include<conio.h>
void main()
{
	int (*p)[3];
	int i,j,n,tot=0;
	clrscr();
	printf("\nEnter Student Count");
	scanf("%d",&n);
	p=(int(*)[])malloc(n*3*sizeof(int));
	printf("\nResult\n");
	for(i=0;i<n;i++)
	{
		printf("\nStudent %d\Marks\n");
		for(j=0;j<n;j++)
			scanf("%d",(*(p+i)+j));
	}
	printf("\nResult\n");
	for(i=0;i<n;i++)
	{
		printf("\nStudent %d\Marks\n");
		for(j=tot=0;j<n;j++)
		{
			printf("%4d",(*(p+i)+j));
			tot+=*(*(p+i)+j);
		}
		printf("\nTotal %d",tot);
	}
	free(p);
	getch();
	return;
}