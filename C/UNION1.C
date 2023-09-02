#include<stdio.h>
#include<conio.h>
union abc
{
	int a;
	float b;
	char c;
}a;
struct pqr
{
	union abc var;
	char type;
}k[5];
void main()
{
	struct pqr k[5];
	int i=0;
	float tmp;
	clrscr();
	scanf("%f",&tmp);
	while(i<5)
	{
		printf("\ni-int\nf-float\nc-char\nType:");
		scanf("%d",&k[i].var.a);
		switch(k[i].type)
		{
			case 'i':
				printf("\n int data:");
				scanf("%d",&k[i].var.a);
				break;
			case 'f':
				printf("\n float data:");
				scanf("%f",&k[i].var.b);
				break;
			case 'c':
				printf("\n char data:");
				scanf("%c",&k[i].var.c);
				break;
		}
		i++;
	}
	printf("\nData\n");
	for(i=0;i<5;i++)
	{
		switch(k[i].type)
		{
			case 'i':
				printf("\n %d",k[i].var.a);
				break;
			case 'f':
				printf("\n %f",k[i].var.b);
				break;
			case 'c':
				printf("\n %c",k[i].var.c);
				break;
		}
	}
	getch();
	return;
}

