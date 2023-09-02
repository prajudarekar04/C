//linked list implimentation stack
//Stack using Linked List.
#include<iostream.h>
#include"node.h"
#include<conio.h>
class Stack
{
	Node *top;
	public:
	Stack()
	{
		top=NULL;
	}
	~Stack();
	void push(int);
	void pop();
	int isEmpty()
	{
		return top==NULL;
	}
	void display();
	void menu();
};
void Stack::push(int d)
{
	top=new Node(d,top);
}
void Stack::pop()
{
	if(top==NULL)
		cout<<"\nUnderflow";
	else
	{
		Node *a=top;
		top=a->getNext();
		delete a;
	}
}
void Stack::display()
{
	Node*a=top;
	if(isEmpty())
		cout<<"\nEmpty Stack";
	else
	{
		cout<<"\nStack Data:\n";
		while(a!=NULL)
		{
			cout<<" "<<a->getData();
			a=a->getNext();
		}
	}
}
Stack::~Stack()
{
	Node*a=top;
	while(top!=NULL)
	{
		top=top->getNext();
		delete a;
		a=top;
	}
}
void Stack::menu()
{
	int opt,d;
	clrscr();
	while(1)
	{
		cout<<"\nMenu\n1.Push\n2.Pop\n3.Display\n4.Exit\nOption:";
		cin>>opt;
		if(opt>3)
			break;
		switch(opt)
		{
			case 1:
				cout<<"\nData:";
				cin>>d;
				push(d);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		}
	}
	getch();
}
void main()
{
	Stack m;
	m.menu();
	return;
}