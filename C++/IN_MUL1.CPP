//Multilevel Inheritance
//use of Protected Data Members.
#include<iostream.h>
#include<conio.h>
class A
{
	protected:
		int a;
	public:
	A(){a=0;}
	~A(){}
	void setA()
	{
		cout<<"\nAa:";
		cin>>a;
	}
	void displayA()
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
	void setB()
	{
		cout<<"\nBb:";
		cin>>b;
	}
	void displayB()
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
	void setC()
	{
		setA();
		setB();
		c=a+b;
	}
	void displayC()
	{
		displayA();
		displayB();
		cout<<"\nCc:"<<c;
	}
};
void main()
{
	C objc;
	objc.setC();
	objc.displayC();
}