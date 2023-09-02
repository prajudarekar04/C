#include<stdio.h>
#include<conio.h>
void main()
{
	char a[80];
	FILE *f1;
	clrscr();
	f1=fopen("stu.txt","r");
	if(f1==NULL)
	{
		printf("\nFile Not Found");
		return;
	}
	printf("\nStuent Data:\n);
	while(1)
	{
		fscanf(f1,"%d %s %d",&rno,nm,&mrk);
		if(feof(f1))
			break;
		printf("\n%5d %-15s %5d",rno,nm,mrk);
	}
	fclose(f1);
	getch();
	return;
}