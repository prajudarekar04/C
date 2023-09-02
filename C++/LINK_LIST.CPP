//Implimetation of Linked List.
#include"node.h"
#include<conio.h>
class list
{
	Node *st;
	public:
	list(){st=NULL;}
	~list();
	void addEnd(int);
	void addBeg(int);
	void display();
	int count();
	int sum();
	int avg(){return sum()/count();}
	void delAll();
	void menu();
};
list::~list()
{
	delAll();
}
void list::addEnd(int d)
{
	Node *a=new Node(d),*b;
	if(st==NULL)
		st=a;
	else
	{
		b=st;
		while(b->getNext()!=NULL)
			b=b->getNext();
		b->setNext(a);
	}
}
void list::addBeg(int d)
{
	st=new Node(d,st);
}
void list::display()
{
	Node*a=st;
	if(st==NULL)
		cout<<"\nEmpty List";
	else
	{
		cout<<"\nData:\n";
		while(a!=NULL)
		{
			cout<<a->getData()<<" ";
			a=a->getNext();
		}
	}
}
int list::count()
{
	Node*a=st;
	int cnt=0;
	while(a!=NULL)
	{
		cnt++;
		a=a->getNext();
	}
	return cnt;
}
int list::sum()
{
	Node*a=st;
	int tot=0;
	while(a!=NULL)
	{
		tot+=a->getData();
		a=a->getNext();
	}
	return tot;
}
void list::delAll()
{
	Node*a=st;
	while(st!=NULL)
	{
		st=a->getNext();
		delete a;
		a=st;
	}
}
void list::menu()
{
	int d,opt;
	while(1)
	{
		cout<<"\nMenu\n1.addEnd\n2.addBeg\n3.display\n4.Sum\n5.Avg\n6.Count\n7.delAll\n8.Exit\nOption:";
		cin>>opt;
		if(opt>7)
			break;
		switch(opt)
		{
			case 1:
				cout<<"\nData:";
				cin>>d;
				addEnd(d);
				break;
			case 2:
				cout<<"\nData:";
				cin>>d;
				addBeg(d);
				break;
			case 3:
				display();
				break;
			case 4:
				cout<<"\nSum:"<<sum();
				break;
			case 5:
				cout<<"\nAvg:"<<avg();
				break;
			case 6:
				cout<<"\nCount:"<<count();
				break;
			case 7:
				delAll();
				break;
		}
	}
}
void main()
{
	list a;
	a.menu();
}