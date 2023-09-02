//Count no. of occurrence of a no. from an array.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i=0,sv,cnt=0;
	clrscr();
	printf("\nArray Data\n");
	while(i<10)
	{
		scanf("%d",&x[i]);
		i++;
	}
	printf("\nBefore Processing\n");
	for(i=0;i<10;i++)
		printf("%4d",x[i]);
	printf("\nSearch Value:");
	scanf("%d",&sv);
	for(i=0;i<10;i++)
	{
		if(x[i]==sv)
			cnt++;
	}
	printf("\nArray Data\n");
	for(i=0;i<10;i++)
		printf("%4d",sv);
	getch();
	return;
}