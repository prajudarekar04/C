#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	int no;
	f1=fopen("num.txt","w");
	while(1)
	{
		printf("\nEnter No.:");
		scanf("%d",&no);
		if(no==0)
			break;
		putw(no,f1);
	}
	fclose(f1);
	getch();
	return;
}