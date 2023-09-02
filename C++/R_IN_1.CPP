//Single Inheritance-Public Derivtion.
#include<iostream.h>
#include<conio.h>
//Default derivation type is private.
class A
{
	private:
	int no;
	protected:
	char nm[15];
	public:
	A()
	{
		no=0;
		nm[0]='\0';
	}
	~A(){}
	void set(int a)
	{
		no=a;
		cout<<"\nName:";
		cin>>nm;
	}
	void display()
	{
		cout<<"\nRoll No:"<<no<<"\nName:"<<nm;
	}
	int getNo(){return no;}
	char *getName(){return nm;}
};
class B:public A //A(Base)->B(Derived)
{//A's Attribute as leading & B's Attribute as tailing
	protected:
	int mrk;
	public:
	B():A()
	{
		mrk=0;
	}
	~B(){}
	void set(int n)
	{
		A::set(n);     //over-riding
		cout<<"\nMarks:";
		cin>>mrk;
	}
	void display()
	{
		A::display();  //over-riding
		cout<<"\nMarks:"<<mrk;
	}
	int getMarks(){return mrk;}
	void setMarks(int a){mrk=a;}
};
void main()
{
	clrscr();
	A obja;
	obja.set(17);
	obja.display();
	B objb;
	objb.set(23);
	objb.display();
	B objx;
	objx.A::set(18);
	objx.setMarks(83);
	objx.display();
	getch();
	return;
}