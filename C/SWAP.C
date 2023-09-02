//To swap 2 inputted no.
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int v1, v2, tmp;
	clrscr();
	printf("\nEnter 2 Nos:");
	scanf("%d %d", &v1, &v2);
	printf("\n Before swapping \nv1: %d\nv2: %d", v1, v2);
	tmp=v1;
	v1=v2;
	v2=tmp;
	printf("\nAfter swapping\nv1:%d\nv2:%d", v1, v2);
	getch();
	return;
}