#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	char op;
	clrscr();
	printf("Enter a & b:");
	scanf("%d %d",&a,&b);
	do
	{
		printf("\n\nMENU");
		printf("\n+ Addition");
		printf("\n- Subtraction");
		printf("\n* Multiplication");
		printf("\n/ Division");
		printf("\n% Remainder");
		printf("\nE Exit");
		printf("\nEnter your choice :");
		getchar();
		op=getchar();
		if(op=='E'||op=='e')
		exit(1);
		switch(op)
		{
			case '+':
				printf("\nAddition");
				c=a+b;
				printf("\nSum=%d",c);
					break;
			case '-':
				printf("\nSubtraction");
				c=a-b;
				printf("\nDifference=%d",c);
					break;
			case '*':
				printf("\nMultiplication");
				c=a*b;
				printf("\nProduct=%d",c);
					break;
			case '/':
				printf("\nDivision");
				c=a/b;
				printf("\nQuotient=%d",c);
					break;
			case '%':
				printf("\nRemainder");
				c=a%b;
				printf("\nRemainder=%d",c);
					break;
			default:
				printf("\nInvalid Option");
					break;
		}	/*end of switch statement*/
	}while(1);	/*End of while*/
	return 0;
}/*End of main function*/