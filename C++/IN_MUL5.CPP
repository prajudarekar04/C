//VIRTUAL FUNCTION
#include<iostream.h>
#include<conio.h>
class A
{
		int a;
	public:
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
		int a;
	public:
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
		int a;
	public:
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
/*
void main()
{
	clrscr();
	A obja;               //2byte
	obja.set();
	obja.display();
	B objb;               //4byte
	objb.A::set();
	objb.set();
	objb.A::display();
	objb.display();
	C objc;               //6byte
	objc.A::set();
	objc.B::set();
	objc.set();
	objc.A::display();
	objc.B::display();
	objc.display();
	getch();
}
*/
void main()
{
	clrscr();
	A obja;
	A *aptr;
	aptr=&obja;
	aptr->set();
	aptr->display();

	B objb;
	aptr=&objb;
	aptr->set();
	aptr->display();

	C objc;
	aptr=&objc;
	aptr->set();
	aptr->display();
	getch();
	return;
}
/*
VIRTUAL FUNCTIONS
As mentioned earlier, Polymorphism refers to the proprty by which objects belonging to the different classes are able to respond to the same essage,
but in different form.An essential reuirement of polymorphism is therefore the ability to refer to objects without any regard to there classes.
This necessites the use of a single ptr. variable to refer to objects of different classes.
Here, we use the ptr. to base class to refer to all the derived objects,but we just discovered thata base ptr.,
even when it is made to contain the address of derived class,always xecutes the functions in a base class.
the compiler simply ignores the contins of the pointer & chooses the member function that matches the type of the pointer.
How do we then achieve Polymorphism ?
It is achieved using, what is known as Virtual Functions.

When we use same function name in both the base & derived classes,
the function in base class is declared class is known as virtual using the keyword virtual,preceding its normal declaration.
When the function is made virtual c++ determines which is funtion used to run time based on the type of object pointed by the base ptr.,
rather than the type of the ptr.Thus,by making the base ptr. to point to different objects we can execute different versions of the virtual functions.

One imp. to remember is that we must accesss virtual function through ......
...........
*/