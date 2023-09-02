//Multi-level Inheritance with public Derivation.(using Virtual Mechanism)
//A->B->C
#include<iostream.h>
#include<conio.h>
class A
{
	protected:
	int a;
	public:
	A()
	{a=0;}
	~A(){}
	virtual void set()
	{
		cout<<"\nAa:";
		cin>>a;
	}
	virtual void display()
	{
		cout<<"\nAa:"<<a;
	}
};
class B:public A
{
	protected:
	int b;
	public:
	B():A()
	{b=0;}
	~B(){}
	void set()
	{
		cout<<"\nBb:";
		cin>>b;
	}
	void display()
	{
		cout<<"\nBb:"<<b;
	}
};
class C:public B
{
	protected:
	int c;
	public:
	C():B()
	{c=0;}
	~C(){}
	void set()
	{
		A::set();
		B::set();
		c=a+b;
	}
	void display()
	{
		A::display();
		B::display();
		cout<<"\nCc:"<<c;
	}
};
void main()
{
	clrscr();
	A *aptr;
	A obja;
	aptr=&obja;
	aptr->set();       //set int a; of class A
	aptr->display();   //displays int a; of class A
	B objb;
	aptr=&objb;
	aptr->set();       //set int b; of class B
	aptr->display();   //displays int b; of class B
	C objc;
	aptr=&objc;
	aptr->set();     //set int c; of class C
	aptr->display(); //displays int c; of class C
	getch();
	return;
}