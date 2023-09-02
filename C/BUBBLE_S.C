//Bubble Sort
#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5];
	clrscr();
	printf("\nArray Data:");
	for(i=0;i<5;i++)
		scanf("%d",&x[i]);
	printf("\nBefore Sorting:");
	for(int i=0;i<5;i++)
		printf("%4d",x[i]);
	for(int i=0;i<4;i++)
	{
		flg=0;
		for(int j=0;j<4-i;j++)
		{
			if(x[j]>x[j+1])
			{
				flg=1;
				int tmp=x[j];
				x[j]=x[j+1];
				x[j+1]=tmp;
			}
		}
		if(flg==0)
			break;
	}
	printf("\nOrdered Data:\n");
	for(int i=0;i<5;i++)
		printf("%4d",x[i]);
	getch();
	return;
}