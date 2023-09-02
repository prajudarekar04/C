//
#include<iostream.h>
class Number
{
	private:
	int no;
	public:
	Number()
	{
		no=0;
	}
	Number(int a)
	{
		no=a;
	}
	~Number(){}
	void setData()
	{
		cout<<"\nEnter No:";
		cin>>no;
	}
	void display()
	{
		cout<<"\nNo: "<<no;
	}
	int getNo(){return no;}
};
class Marks:Number
{
	double mrk;
	public:
	Marks():Number()
	{
		mrk=0.0;
	}
	Marks(int a,double b):Number(a)
	{
		mrk=b;
	}
	~Marks(){}
	void setMarks()
	{
		cout<<"\nMarks:";
		cin>>mrk;
	}
	void displayMarks()
	{
		cout<<"\nMarks:"<<mrk;
	}
	double getMarks(){return mrk;}
	void inputNo(){setData();}
	void displayNo(){display();}
};
void main()
{
	Marks a;
	a.inputNo();
	a.setMarks();
	a.displayNo();
	a.displayMarks();
	Marks b(8,9.2);
	b.displayNo();
	b.displayMarks();
	return;
}