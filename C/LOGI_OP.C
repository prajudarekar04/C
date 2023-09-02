//Logical Operator
//AND &&
//OR ||
//NOT !
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int no;
	char ch;
	clrscr();
	printf("\n Type Character:");
	scanf("%c", &ch);
	printf("\n Enter No:");
	scanf("%d", &no);
	printf("\n %d", ch>'A'&&ch<=90);
	printf("\n %d", ch>='0'&&ch<='9');
	printf("\n %d", ch=='a'||ch=='A');
	printf("\n %d", no>=0&&no<=100);
	printf("\n %d", no<=0||no>=100);
	printf("\n %d", !(no<0||no>100));
	printf("\n %d", (no%5=0)||(no%7=0));
	printf("\n %d", (no/100)>0);
	getch();
	return;
}