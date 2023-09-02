#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

typedef struct slist
{
	NODE *st; //Head Node Pointer.
	int cnt; //Count.
}SLIST;

//Function to Initialize.

void init(SLIST *q)
{
	q->st=NULL;
	q->cnt=0;
}

//Function to crate Node.

NODE *createNode(int d)
{
	NODE *a;
	a=(NODE *)malloc(sizeof(NODE));
	a->data=d;
	a->next=NULL;
	return a;
}

//Function to retrieve Node.

NODE *getLastNode(NODE *a)
{
	while(a->next!=NULL)
		a=a->next;
	return a;
}

//Function to add New Node at End.
void addEnd(SLIST *t,int d)
{
	NODE *a=createNode(d),*b;
	if(t->st==NULL)
		t->st=a;
	else
	{
		b=getLastNode(t->st);
		b->next=a;
	}
	t->cnt++;
}

//Function to add New node at Begin.
void addBeg(SLIST *t,int d)
{
	NODE *a=createNode(d);
	a->next=t->st;
	t->st=a;
	t->cnt++;
}

//Function to Display list.
void display(SLIST *t)
{
	NODE *a=t->st;
	if(t->cnt==0)
		printf("\nEmpty List.");
	else
	{
		printf("\nData:\n");
		while(a!=NULL)
		{
			printf("%4d",a->data);
			a=a->next;
		}
	}
	return ;
}

//Function to Count Nodes having Odd Data.
int ocount(SLIST *t)
{
	NODE *a=t->st;
	int tot=0;
	while(a!=NULL)
	{
		tot+=(a->data%2==1);
		a=a->next;
	}
	return tot;
}

//Function to Count Even data Nodes.
/*int ecount(SLIST *t)
{
	NODE *a=t->st;
	int tot=0;
	while(a!=NULL)
	{
		tot+=(a->data%2==0);
		a=a->next;
	}
	return tot;
}
*/

int ecount(SLIST *t)
{
	return(t->cnt-ocount(t));
}

//Function to Display Odd Data Nodes.
void odisplay(SLIST *t)
{
	NODE *a=t->st;
	if(t->st==NULL)
		printf("\nEmpty List.");
	else
	{
		printf("\nOdd Data List:\n");
		while(a!=NULL)
		{
			if(a->data%2==1)
				printf("%4d",a->data);
			a=a->next;
		}
	}
}

//Function to Display Even Data Nodes.
void edisplay(SLIST *t)
{
	NODE *a=t->st;
	if(t->st==NULL)
		printf("\nEmpty List.");
	else
	{
		printf("\nEven Data List:\n");
		while(a!=NULL)
		{
			if(a->data%2==0)
				printf("%4d",a->data);
			a=a->next;
		}
	}
}

//Function to Compute Data Sum.
int sum(SLIST *t)
{
	NODE *a=t->st;
	int tot=0;
	while(a!=NULL)
	{
		tot+=a->data;
		a=a->next;
	}
	return tot;
}

//Function to delete first node from list.
void delFirst(SLIST *t)
{
	NODE *a=t->st;
	t->st=a->next;
	t->cnt--;
	free(a);
}

//Function to Delete last node from list.
void delLast(SLIST *t)
{
	NODE *a=t->st,*b;
	if(a->next==NULL)
		t->st=a->next;
	else
	{
		while(a->next!=NULL)
		{
			b=a;
			a=a->next;
		}
		b->next=NULL;
	}
	free(a);
	t->cnt--;
}

//Function to Delete All Nodes from the List.
/*
void delAll(SLIST *t)
{
	while(t->st!=NULL)
		delFirst(t);
}
*/

void delAll(SLIST *t)
{
	NODE *a=t->st;
	while(t->st!=NULL)
	{
		t->st=a->next;
		free(a);
		a=t->st;
	}
	t->cnt=0;
}

//Function to delete ith node from list.
void deliNode(SLIST *t,int pos)
{
	int i=1;
	NODE *a=t->st,*b,*c;
	if(pos==1)
		delFirst(t);
	else
	{
		if(pos==t->cnt)
			delLast(t);
		else
		{
			while(i<pos)
			{
				b=a;
				a=a->next;
				i++;
			}
			c=a->next;
			b->next=c;
			free(a);
			t->cnt--;
		}
	}
}

//Function to Search a Value from the List ,return 1 if found otherwwise 0.
int search(SLIST *t,int sv)
{
	NODE *a=t->st;
	while(a!=NULL)
	{
		if(a->data==sv)
			break;
		a=a->next;
	}
	if(a==NULL)
		return 0;
	else
		return 1;
}

//Functin to implement find and replace from the list.
void findRepl(SLIST *t,int sv,int rv)
{
	NODE *a=t->st;
	while(a!=NULL)
	{
		if(a->data==sv)
			a->data=rv;
		a=a->next;
	}
}

//Function to find out maximum data from list.
int findMax(SLIST *t)
{
	NODE *a=t->st;
	int max=a->data;
	for(a=a->next;a!=NULL;a=a->next)
	{
		if(a->data>max)
			max=a->data;
	}
	return max;
}

//Function to find out Minimum data from list.
int findMin(SLIST *t)
{
	NODE *a=t->st;
	int min=a->data;
	for(a=a->next;a!=NULL;a=a->next)
	{
		if(a->data<min)
			min=a->data;
	}
	return min;
}

//Function to insert node after two nodes which is addition of first two nodes.
void insertA2(SLIST *t)
{
	int d;
	NODE *a=t->st,*b,*c;
	while(a!=NULL)
	{
		if(a->next==NULL)
			break;
		b=a->next;
		d=a->data+b->data;
		c->next=b->next;
		c=createNode(d);
		b->next=c;
		a=c->next;
		t->cnt++;
	}
}

//Function to insert node Before two nodes which is addition of first two nodes.
void insertB2(SLIST *t)
{
	int d;
	NODE *a=t->st,*b,*c,*tmp;
	while(a!=NULL)
	{
		if(a->next==NULL)
			break;
		b=a->next;
		d=a->data+b->data;
		c=createNode(d);
		if(t->st==a)
			break;
		else 
			tmp->next=c;
		c->next=a;
		tmp=b;
		a=b->next;
		t->cnt++;
	}
}

//copy list
void copyList(SLIST *d,SLIST *s)
{
	int data;
	NODE *a=s->st,*b=d->st,*c;
	while(a!=NULL)
	{
		data=a->data;
		c=createNode(data);
		if(d->st==NULL)
			d->st=c;
		else
			b->next=c;
		b=c;
		d->cnt++;
		a=a->next;
	}
}

//Selection Sort.
void sort(SLIST *t)
{
	NODE *a=t->st,*b,*c;
	int tmp;
	while(a->next!=NULL)
	{
		c=a;
		for(b=a->next;b!=NULL;b=b->next)
		{
			if(b->data<c->data)
				c=b;
		}
		if(a!=c)
		{
			tmp=a->data;
			a->data=c->data;
			c->data=tmp;
		}
		a=a->next;
	}
}

//Function to check list data is in assending order return 1 if ordered else 0.
int isOrdered(SLIST *t)
{
	NODE *a=t->st;
	int tmp=a->data;
	for(a->next;a!=NULL;a->next)
	{
		if(a->data<tmp)
			break;
		else
			tmp=a->data;
	}
	if(a!=NULL)
		return 0;
	else
		return 1;
}

//Function to Append List.(add new node at end)
void appendList(SLIST *d,SLIST *s)
{
	NODE *a=s->st,*b;
	if(d->st==NULL)
		copyList(d,s);
	else
	{
		b=getLastNode(d->st);
		while(a!=NULL)
		{
			b->next=createNode(a->data);
			b=b->next;
			a=a->next;
			d->cnt++;
		}
	}
}

//Function to revese Slist
void reverse(SLIST *t)
{
	NODE *a=t->st,*b,*c;
	while(a!=NULL)
	{
		c=a->next;
		a->next=b;
		b=a;
		a=c;
	}
	t->st=b;
}

//Function to display the Slist in reverse order.
void rdisplay(NODE *a)
{
	if(a==NULL)
		return;
	rdisplay(a->next);
	printf("%4d",a->data);
	return;
}

//Function to copy list data to memory.
int *listToArray(SLIST *t)
{
	int *a=(int *)malloc(t->cnt*sizeof(int));
	int i=0;
	NODE *b=t->st;
	while(b!=NULL)
	{
		a[i++]=b->data;
		b=b->next;
	}
	return a;
}

//Function to Build list from an Array.
void arrayToList(SLIST *p,int *ptr,int n)
{
	int i=0;
	NODE *a,*b;
	if(p->st!=NULL)
		delAll(p);
	while(i<n)
	{
		a=createNode(ptr[i]);
		if(p->st==NULL)
			p->st=a;
		else
			b->next=a;
			b=a;
			p->cnt++;
		i++;
	}
}

//Function to insert new node before ith position.
void insertB(SLIST *t,int pos,int d)
{
	NODE *a=t->st,*b,*c;
	int i=1;
	if(pos==1)
		addBeg(t,d);
	else
	{
		while(i<pos)
		{
			b=a;
			a=a->next;
			i++;
		}
		c=createNode(d);
		b->next=c;
		c->next=a;
		t->cnt++;
	}
}

//Function to insert new node After ith position.
void insertA(SLIST *t,int pos,int d)
{
	NODE *a=t->st,*b,*c;
	int i=1;
	if(pos==t->cnt)
		addBeg(t,d);
	else
	{
		while(i<=pos)
		{
			b=a;
			a=a->next;
			i++;
		}
		c=createNode(d);
		b->next=c;
		c->next=a;
		t->cnt++;
	}
}

//Function to Copy reverse list.
SLIST revCopy(SLIST *t)
{
	SLIST b;
	NODE *a=t->st;
	init(&b);
	while(a!=NULL)
	{
		addBeg(&b,a->data);
		a=a->next;
	}
	return b;
}
