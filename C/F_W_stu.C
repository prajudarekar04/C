#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	int rno,mrk;
	char nm[20];
	f1=fopen("stu.txt","w")
	while(1)
	{
		printf("Roll NO:");
		scanf("%d",&rno);
		if(rno==0)
			break;
		printf("\nName:");
		scanf("%s",nm);
		printf("\nMarks:");
		scanf("%d",&mrk);
		fprintf(f1,"%d %s %d",rno,nm,mrk);
	}
	fclose(f1);
	return;
}