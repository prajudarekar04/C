#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"CSTK.h"  // Codes/C/DS/Stack/include/CSTK.h

void main()
{
	char a[50];
	CSTK p;
	int i=0;
	init(&p);
	printf("\nString:");
	gets(a);
	while(a[i]!='\0')
		push(&p,a[i++]);
	i=0;
	while(!isEmpty(&p))
		a[i++]=pop(&p);
	a[i]='\0';
	outs(a);
}
