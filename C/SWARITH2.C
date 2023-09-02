//To compute arithmetic result on 2 inputted nos.(using switch case).
//Type 2
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,res,flg=0;
	int opr;
	clrscr();
	flg=0;
	while(1)
	{
		if(flg==0)
		{
			printf("\nA:");
			scanf("%d",&a);
			flg=1;
		}
		else
			a=res;
		printf("\nOperators\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\nOption:");
		scanf("%d",opr);
		getchar();
		opr=getchar();
		if(opr==5)
			exit(1);
		printf("\nB:");
		scanf("%d",&b);
		printf("\na:%d	b:%d  opr:%d",a,b,opr);
		switch(opr)
		{
			case '+':
				printf("%d+%d=%d",a,b,a+b);
				res=a+b;	break;
			case '-':
				printf("%d-%d=%d",a,b,a-b);
				res=a-b;	break;
			case '*':
				printf("%d*%d=%d",a,b,a*b);
				res=a*b;	break;
			case '/':
				printf("%d/%d=%d",a,b,a/b);
				res=a/b;	break;
		}
		printf("\nResult:%d",res);
	}
	getch();
	return;
}