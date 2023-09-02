//Collision Resolution using linear probing.
#include<stdio.h>
#include<conio.h>
typedef struct student
{
	int rno;
	char nm[15];
}STU;
STU k[10];
//hash function
int hash(int val)
{
	return val%10;
}
void init()
{
	int i=0;
	while(i<10)
	{
		k[i].rno=0;
		strcpy(k[i].nm,"");
		i++;
	}
}
void insert()
{
	int no,hval,i;
	printf("\nRoll No.:");
	scanf("%d",&no);
	hval=hash(no);
	if(k[hval].rno==0)
	{
		k[hval].rno=no;
		printf("\nName:");
		scanf("%s",k[hval].nm);
		printf("\nInsertion at home area");
		return;
	}
	for(i=hval+1;i<10;i++)
	{
		if(k[i].rno==0)
		{
			k[i].rno=no;
			printf("\nName:");
			scanf("%s",k[i].nm);
			printf("\nInsetion on Collision Path.");
			break;
		}
	}
	if(i<10)
		return;
	for(i=0;i<hval;i++)
	{
		if(k[i].rno==0)
		{
			k[i].rno=no;
			printf("\nName:");
			scanf("%s",k[i].nm);
			printf("\nInsetion on Collision Path.");
			break;
		}
	}
	if(i==hval)
		printf("\nOverflow.");
	return;
}
void search()
{
	int no,hval,i;
	printf("\nRoll No.:");
	scanf("%d",&no);
	hval=hash(no);
	if(k[hval].rno==no)
	{
		printf("\nName: %s",k[hval].nm);
		printf("\nRecord Found at home area");
		return;
	}
	for(i=hval+1;i<10;i++)
	{
		if(k[i].rno==no)
		{
			printf("\nName: %s",k[i].nm);
			printf("\nRecord Found on Collision Path.");
			break;
		}
	}
	if(i<10)
		return;
	for(i=0;i<hval;i++)
	{
		if(k[i].rno==no)
		{
			printf("\nName: %s",k[i].nm);
			printf("\nRecord Found on Collision Path.");
			break;
		}
	}
	if(i==hval)
		printf("\nNot Found.");
	return;
}
void main()
{
	int opt;
	clrscr();
	init();
	while(1)
	{
		printf("\nLinear Probing\n1.Insert\n2.Search\n3.Exit\nOption:");
		scanf("%d",&opt);
		if(opt>2)
			break;
		if(opt==1)
			insert();
		else
			search();
	}
	getch();
	return;
}