//Member function of class B friend to member function of class A.
#include<iostream.h>
class A;//forward decl.
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
	void swap(A&);
};
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
	friend void B::swap(A&);
};
void B::swap(A&t)
{
	int tmp=b;
	b=t.a;
	t.a=tmp;
}
void main()
{
	A obja;
	B objb;
	obja.set();
	objb.set();
	obja.display();
	objb.display();
	objb.swap(obja);
	obja.display();
	objb.display();
	return;
}