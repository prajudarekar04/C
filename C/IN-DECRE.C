//Increment & Decrement Operators 
// ++ --
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int a, b;
	clrscr();
	printf("\n Enter No:");
	scanf("%d", &a);
	printf("\n A: %d", a);
	a++;	//post-increment
	printf("\n A: %d", a);
	++a;	//pre-increment
	printf("\n A: %d", a);
	b=++a;
	printf("\n A: %d \n B: %d", a, b);
	b=a++;
	printf("\n A: %d \n B: %d", a, b);
	return;
}