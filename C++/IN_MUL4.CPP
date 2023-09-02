//
#include<iostream.h>
#include<conio.h>
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
	C objc;
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
	((*B)aptr)->set();
	((*B)aptr)->display();

	C objc;
	C *cptr;
	cptr=&objc;
	cptr->set();
	cptr->display();
	getch();
}
/*

We have already seen that, how to use ptrs. to access the class members.
As stated earlier a ptr. can point to a object created by a class.
Object ptrs. are useful in creating objects at run time.
We can also use a object ptr. to acccess public members of an object.
We can refer public members in 2 ways:
1.By using dot(.) operator 2.By using arrow(->) operator.

POINTERS TO DERIVED CLASS:
We can use ptrs. not only to base objects, but also to the objects of derived classes.
Pointers to objects of a base class are type compatiable
to with ptrs. to object of derived class.
(Every derived class object)
Therefore a single ptr. variable can be made to point to objects beloging to the ....
Consider above Multi-level Class
where, A is a base class & B is derived class from A
& C is derived class B.
then a ptr. declared to Class A can also be ptr. to B & ptr. to C.
Consider the following statements:
1.A *aptr;
2.A obja;
3.B objb;
4.C objc;
5.aptr=&obja; //aptr to point to the object obja
6.aptr=&objb; //aptr to point to the object objb
This is perfectly valid in c++,because objb is an object derived from class A.

	However there is a problem in using aptr to access the public members of the derived class B.
using aptr,we can access only those members,
which are inherited from A,& not the members tht originally belong to B.
In case, a membr of B has the same name as one of the member of A,
then ny reference to that member by aptr,will always access the base class member.
	Although c++ permits a base pointer to point the any object derived from that base,
the pointer cannot be directly used to access all the members of th derived class.
We may have to use another pointer declared as the pointer to the derived type.

VIRTUAL FUNCTIONS

*/
