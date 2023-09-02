#include<stdio.h>
#include<conio.h>
void main()
{
	int nos[5];
	int *ptr[5];
	int i,j,tot;
	printf("\nStudent Result");
	for(i=0;i<5;i++)
	{
		printf("\nStudent %d",i);
		printf("\nSubject Count:");
		scanf("%d",(nos+i));
		*(ptr+i)=(int*)malloc((*(nos+i))*sizeof(int));
		printf("\nEnter Marks:");
		for(j=0;j<*(nos+i);j++)
			scanf("%d",(*(ptr+i)+j));
	}
	printf("\nstudent Result\n");
	for(i=0;i<5;i++)
	{
		printf("\nStudent %d",i);
		printf("\nMarks\n");
		for(j=tot=0;j<*(nos+i);j++)
		{
			printf("%4d",*(*(ptr+i)+j));
			tot+=*(*(ptr+i)+j);
		}
		printf("\nTotal:%d",tot);
		free(*(ptr+i));
	}
	getch();
	return;
}

