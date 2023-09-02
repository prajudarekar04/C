//Use of Break & Continue statements.
//Type 1- +ve & -ve both nos. allowed.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,tot=0;
	clrscr();
	while(1)
	{
		printf("\nEnter No.");
		scanf("%d",&x);
		if(x==0)
			break;
		else
			tot+=x;
	}
	printf("\nSum:%d",tot);
	getch();
	return;
}