#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	int no,mrk,rno,flag=0;
	char nm[20];
	f1=fopen("str.txt","r");
	if(f1==NULL)
	{
		printf("\nFile Not Found.");
		return;
	}
	printf("\nEnter Roll No. to search:");
	scanf("%d",&rno);
	while(1)
	{
		fscanf(f1,"%d %s %d",&no, nm, &mrk);
		if(feof(f1))
			break;
		if(no==rno)
		{
			flag=0;
			break;
		}
	}
	fclose(f1);
	if(flag==0)
		printf("\nNot Found.");
	else
		printf("\nNo:%d\nName:%s\nMarks:%d\nRecord Fiund",no,nm,mrk);
	return;
}