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
		//A::set();
		cout<<"\nAa:";
		cin>>A::a;
		cout<<"\nBa:";
		cin>>a;
	}
	void display()
	{
		//A::display();
		cout<<"\nAa:"<<A::a<<"\nBa:"<<a;
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
		//B::set();
		cout<<"\nAa:";
		cin>>A::a;
		cout<<"\nBa:";
		cin>>B::a;
		cout<<"\nCa:";
		cin>>a;
	}
	void display()
	{
		//B::display();
		cout<<"\nAa:"<<A::a<<"\nBa:"<<B::a<<"\nCa:"<<a;
	}
};
void main()
{
	clrscr();

	A obja;             //2
	obja.set();
	obja.display();

	B objb;             //4
	objb.set();
	objb.display();

	C objc;             //6
	objc.set();
	objc.display();
	getch();
	return;
}