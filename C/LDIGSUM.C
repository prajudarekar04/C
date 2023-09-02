//Conditional Operators ? :
//To compute digit sum of 3digit inputted no.
#include<stdio.h>
#include<conio.h>
void main()
{
	int no, dig, sum=0;
	clrscr();
	printf("\n Enter 3 digit no:");
	scanf("%d", &no);
	dig=no%10;
	sum=sum+dig;
	no/=10;
	dig=no%10;
	sum+=dig;
	no/=10;
	dig=no%10;
	sum+=dig;
	no/=10;
	printf("\n Digit sum: %d", sum);
	getch();
	return;
}

// no.  dig  sum
// 129   9     0
//  12   2     9
//   1   1    11
//   0