#include<stdio.h>
#include<conio.h>
void main()
{
       int no;
       int oddeven(int);
       clrscr();
       printf("\nEnter no.");
       scanf("%d",&no);
       if(oddeven(no)==0)
		printf("\nEven");
       else
		printf("\nOdd");
       getch();
       return;
}
int oddeven(int a)
{
	return(a%2);
}
