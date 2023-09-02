//Herachical Inheritance
//Implimentation of Stack & Queue
#include<iostream.h>
#define M 5
class Array
{
	protected:
	int arr[M];
	public:
	Array();
	~Array(){}
	void set(int pos,int d)
	{
		arr[pos]=d;
	}
	int get(int pos)
	{
		return arr[pos];
	}
};
Array::Array()
{
	for(int i=0;i<M;i++)
		arr[i]=0;
}
class Stack:public Array
{
	protected:
	int top;
	public:
	Stack():Array()
	{
		top=-1;
	}
	~Stack(){}
	void push(int d)
	{
		if(top==M-1)
			cout<<"\nOverflow.";
		else
			set(++top,d);
	}
	void pop()
	{
		if(top==-1)
			cout<<"\nUnderflow.";
		else
			top--;
	}
	void display();
	void menu();
};// |array|top| leading array belong to base class, tailing top belong to derived class
void Stack::display()
{
	if(top==-1)
		cout<<"\nEmpty Stack.";
	else
	{
		cout<<"\nData:\n";
		for(int i=top;i>=0;i--)
			cout<<" "<<get(i);
	}
}
void Stack::menu()
{
	int opt,d;
	while(1)
	{
		cout<<"\nStack\n1.Push\n2.Pop\n3.Display\n4.Exit\nOption:";
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
		}
	}
}
class Queue:public Array
{
	protected:
	int fr,rr;
	public:
	Queue():Array()
	{
		rr=-1;
		fr=0;
	}
	~Queue(){}
	void insert(int d)
	{
		if(rr==M-1)
			cout<<"\nOverflow.";
		else
			set(++rr,d);
	}
	void remque()
	{
		if(rr<fr)
			cout<<"\nUnderflow.";
		else
			++fr;
	}
	void display();
	void menu();
};
void Queue::display()
{
	if(rr<fr)
		cout<<"\nEmpty Queue.";
	else
	{
		cout<<"\nData:\n";
		for(int i=fr;i<=rr;i++)
			cout<<" "<<get(i);
	}
}
void Queue::menu()
{
	int opt,d;
	while(1)
	{
		cout<<"\nQueue\n1.Insert\n2.Remove\n3.Display\n4.Exit\nOption:";
		cin>>opt;
		if(opt>3)
			break;
		switch(opt)
		{
			case 1:
				cout<<"\nData:";
				cin>>d;
				insert(d);
				break;
			case 2:
				remque();
				break;
			case 3:
				display();
		}
	}
}
void main()
{
	Queue p;
	p.menu();
	/*
	Stack s;
	s.menu();*/
}