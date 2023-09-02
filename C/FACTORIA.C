//To compute factorials of inputted no.
// n   f
// 4   1
// 3   4
// 2  12
// 1  24
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	long int f=1;
	clrscr();
	printf("\n Enter No:");
	scanf("%d", &n);
	while(n>1)
		f*=n--;
	printf("\n Factorials:");
	printf("%ld", f);
	getch();
	return;
}