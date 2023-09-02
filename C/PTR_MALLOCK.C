#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,i,tot;
	int * ptr;
	printf("\nEnter Information Count:");
	scanf("%d",&n);
	ptr=(int*) malloc(n* sizeof(int));
	printf("\nData:");
	for(i=0;i<n;i++)
		scanf("%d",(ptr+i));
	printf("\nData\n");
	for(i=tot=0;i<n;i++)
	{
		printf("\n %5d",*(ptr+i));
		tot+=*(ptr+i);
	}
	printf("\nTotal:%d",tot);
	free (ptr);
	getch();
	return;
}
