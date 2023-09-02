//Use of Break & Continue statements.
//Type 2-Negative Nos. not allowed.
#include<stdio.h>
#include<conio.h>
void main()
{
	int no, tot=0;
	clrscr();
	while(1)
	{
		printf("\n Enter No:");
		scanf("%d", &no);
		if(no==0)
			break;
		if(no<0)
		{
			printf("\n Invaild input");
			continue;
		}
		tot+=no;
	}
	printf("\n Sum: %d",tot);
	getch();
	return;
}