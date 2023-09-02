//Multilevel Inheritance.
#include<iostream.h>
#include<conio.h>
class A
{
	protected:
		int a;
	public:
	A(){a=0;}
	~A(){}
	void set()
	{
		cout<<"\nAa:";
		cin>>a;
	}
	void display()
	{
		cout<<"\nAa:"<<a;
	}
};
class B:public A
{
	protected:
	int a;
	public:
	B():A()
	{a=0;}
	~B(){}
	void set()
	{
		cout<<"\nBa:";
		cin>>a;
	}
	void display()
	{
		cout<<"\nBa:"<<a;
	}
};
class C:public B
{
	protected:
	int a;
	public:
	C():B()
	{a=0;}
	~C(){}
	void set()
	{
		cout<<"\nCa:";
		cin>>a;
	}
	void display()
	{
		cout<<"\nCa:"<<a;
	}
};
void main()
{
	A obja;
	obja.set();
	obja.display();
	B objb;
	objb.set();
	objb.A::set();
	objb.A::display();
	objb.display();
	C objc;
	objc.set();
	objc.display();
	getch();
	return;
}