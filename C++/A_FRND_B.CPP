//Member function of class friend to member function of class
#include<iostream.h>
class B;//forward decl.
class A
{
	int a;
	public:
	void set()
	{
		cout<<"\nAa:";
		cin>>a;
	}
	void display()
	{
		cout<<"\nAa:"<<a;
	}
	void swap(B&);
};
class B
{
	int b;
	public:
	void set()
	{
		cout<<"\nBb:";
		cin>>b;
	}
	void display()
	{
		cout<<"\nBb:"<<b;
	}
	friend void A::swap(B&);
};
void A::swap(B&q)
{
	int tmp=a;
	a=q.b;
	q.b=tmp;
}
void main()
{
	A aobj;
	B bobj;
	aobj.set();
	bobj.set();
	aobj.display();
	bobj.display();
	aobj.swap(bobj);
	aobj.display();
	bobj.display();
	return;
}