#include<stdio.h>
#include<conio.h>
typedef struct account
{
	int acno;
	char acnm[15];
	int opnbal;
	int state;
}ACC;
ACC var;
FILE *fa;
void update(int no)
{
	var.acno=no;
	printf("\nA/c Holder Name:");
	scanf("%s",var.acnm);
	do
	{
		printf("\nOpening Balance:");
		scanf("%d",&var.opnbal);
		if(var.opnbal>=500)
			break;
		else
			printf("\nInvalid opening balance");
	}while(1);
	var.state=1;
}
void display()
{
	printf("\nA/c Data\nNo:%d\nName:%s\nOpening Balance:%d\nState:%d",var.acno,var.acnm,var.opnbal,var.state);
}
int search(int no)
{
	int pos=0;
	rewind(fa);
	while(1)
	{
		fread(&var,sizeof(ACC),1,fa);
		if(feof(fa))
		{
			pos=-1;
			break;
		}
		if(var.acno==no)
			break;
		pos=ftell(fa);
	}
	return(fa);
}
void add()
{
	int no,pos;
	printf("\nEnter A/c no:");
	scanf("%d",&no);
	pos=search(no);
	if(pos>=0)
	{
		printf("\nRecord exist");
		return;
	}
	update(no);
	fseek(fa,0,SEEK_END);
	fwrite(&var,sizeof(ACC),1,fa);
}
void mod()
{
	int no,pos;
	printf("\nEnter A/C No:");
	scanf("%d",&no);
	pos=search(no);
	if(pos==-1||var.state==0)
	{
		printf("\nRecord Not Found");
		return;
	}
	update(no);
	fseek(fa,pos,SEEK_SET);
	fwrite(&var,sizeof(ACC),1,fa);
}
void del()
{
	int no,pos;
	printf("\nEnter A/C No:");
	scanf("%d",&no);
	pos=search(no);
	if(pos==-1||var.state==0)
	{
		printf("\nRecord Not Found");
		return;
	}
	var.state=0;
	fseek(fa,pos,SEEK_SET);
	fwrite(&var,sizeof(ACC),1,fa);
}
void displayAll()
{
	rewind(fa);
	while(1)
	{
		fread(&var,sizeof(ACC),1,fa);
		if(feof(fa))
			break;
		display();
	}
}
void main()
{
	int opt;
	fa=fopen("acc.dat","r+b");
	if(fa==NULL)
	{
		fa=fopen("acc.dat","wb");
		fclose(fa);
		fa=fopen("acc.dat","r+b");
	}
	while(1)
	{
		printf("\nMenu\n1.Add\n2.Mod\n3.Del\n4.Display all\n5.Exist\nOption:");
		scanf("%d",&opt);
		if(opt>4)
			break;
		switch(opt)
		{
			case 1:
				add(); break;
			case 2:
				mod(); break;
			case 3:
				del(); break;
			case 4:
				displayAll(); break;
		}
	}
	fclose(fa);
}
