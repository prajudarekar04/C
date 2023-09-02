#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,flg=1;
	int opr;
	clrscr();
	printf("\nOperand 1:");
	scanf("%d", &a);
	printf("\nOperand 2:");
	scanf("%d", &b);
	printf("\nOperators\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nOption:");
	scanf("%d", &opr);
	switch(opr)
	{
		case 1:
			printf("%d+%d=%d",a,b,a+b); break;
		case 2:
			printf("%d-%d=%d",a,b,a-b); break;
		case 3:
			printf("%d*%d=%d",a,b,a*b); break;
		case 4:
			printf("%d/%d=%d",a,b,a/b); break;
		default:
			flg=0; printf("Invalid Input"); break;
	}
	getch();
	return;
}