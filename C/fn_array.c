#include<stdio.h>
#include<conio.h>
void main()
{
	void ioarray();
	clrscr();
	ioarray();
	getch();
	return;
}
void ioarray()
{
	int i=0,x[5];
	printf("\nArray Data");
	for(i=0;i<5;i++)
		scanf("%d",&x[i]);
	printf("\nOutput\n");
	for(i=0;i<5;i++)
		printf("%5d",x[i]);
	return;
}