#include<stdio.h>
#include<stdlib.h>

#define M 10

typedef struct stack
{
	int top;
	char arr[M];
}CSTK;

void init(CSTK *t)
{
	t->top=-1;
}

int isEmpty(CSTK *t)
{
	return(t->top==-1);
}

char pop(CSTK *t)
{
	return t->arr[t->top--];
}

void push(CSTK *t,char ch)
{
	if(t->top==M-1)
		printf("\nOverflow.");
	else
	{
		t->top++;
		t->arr[t->top]=ch;
	}
}

void display(CSTK *t)
{
	int i=t->top;
	if(isEmpty(t))
		printf("\nEmpty Stack.");
	else
	{
		printf("\nStach Data:\n");
		while(i>=0)
			printf("%c",t->arr[i--]);
	}
}
