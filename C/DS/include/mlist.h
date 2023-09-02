#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"SLIST.h"

//Function to create List.

void createList(SLIST *t)
{
	NODE *a,*b;
	int d;
	delAll(t);
	printf("\nData:\n");
	while(1)
	{
		scanf("%d",&d);
		if(d==0)
			break;
		if(t->st==NULL)
			t->st=a=createNode(d);
		else
		{
			if(d<b->data)
			{
				printf("\nInvalid Data.");
				continue;
			}
			a=createNode(d);
			b->next=a;
		}
		b=a;
		t->cnt++;
	}
}

//Function to genrate slist from intersection of two slists.

SLIST interList(SLIST *p,SLIST *q)
{
	int data;
	NODE *a=p->st,*b=q->st,*c,*d;
	SLIST r;
	init(&r);
	while(a&&b!=NULL) //(a!=NULL&&b!=NULL)
	{
		if(a->data<b->data)
		{
			a=a->next;
			continue;
		}
		if(b->data<a->data)
		{
			b=b->next;
			continue;
		}
		data=a->data;
		a=a->next;
		b=b->next;
		if(r.st==NULL)
			r.st=c=createNode(data);
		else
		{
				if(data==d->data)
					continue;
				c=createNode(data);
				d->next=c;
		}
		d=c;
		r.cnt++;
	}
	return r;
	
}

//Function to gerate 3rd list from union of 2 lists.

SLIST unionList(SLIST *p,SLIST *q)
{
	int data;
	NODE *a=p->st,*b=q->st,*c,*d;
	SLIST r;
	init(&r);
	while(a&&b)
	{
		if(a->data<b->data)
		{
			data=a->data;
			a=a->next;
		}
		else
		{
			data=b->data;
			b=b->next;
		}
		if(r.st==NULL)
			r.st=c=createNode(data);
		else
		{
			if(data==d->data)
				continue;
			c=createNode(data);
			d->next=c;
		}
		d=c;
		r.cnt++;
	}
	while(a!=NULL)
	{
		data=a->data;
		a=a->next;
		if(r.st==NULL)
			r.st=c=createNode(data);
		else
		{
			if(data==d->data)
				continue;
			c=createNode(data);
			d->next=c;
		}
		d=c;
		r.cnt++;
	}
	while(b!=NULL)
	{
		data=b->data;
		b=b->next;
		if(r.st==NULL)
			r.st=c=createNode(data);
		else
		{
			if(data==d->data)
				continue;
			c=createNode(data);
			d->next=c;
		}
		d=c;
		r.cnt++;
	}
	return r;
}

//Function to Genrate Mlist from Merging of 2 ordered list.

SLIST mergeList(SLIST *p,SLIST *q)
{
	int data;
	NODE *a=p->st,*b=q->st,*c,*d;
	SLIST r;
	init(&r);
	while(a&&b)
	{
		if(a->data<b->data)
		{
			data=a->data;
			a=a->next;
		}
		else
		{
			data=b->data;
			b=b->next;
		}
		if(r.st==NULL)
			r.st=c=createNode(data);
		else
		{
			c=createNode(data);
			d->next=c;
		}
		d=c;
		r.cnt++;
	}
	while(a!=NULL)
	{
		data=a->data;
		if(r.st==NULL)
			r.st=c=createNode(data);
		else
		{
			c=createNode(data);
			d->next=c;
		}
		d=c;
		r.cnt++;
		a=a->next;
	}
	while(b!=NULL)
	{
		data=b->data;
		if(r.st==NULL)
			r.st=c=createNode(data);
		else
		{
			c=createNode(data);
			d->next=c;
		}
		d=c;
		r.cnt++;
		b=b->next;
	}
}
