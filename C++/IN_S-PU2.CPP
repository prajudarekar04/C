//Implimenttion of Single Inheritance with Public Derivation.
#include<iostream.h>
#include<conio.h>
class Number
{
	private:
	int no;
	public:
	void setData()
	{
		cout<<"\nEnter No.:";
		cin>>no;
	}
	void display()
	{
		cout<<"\nNo.:"<<no;
	}
	int getNo(){return no;}
};
class Result:public Number
{
	private:
	double mrk;
	public:
	void setMarks()
	{
		setData();
		cout<<"\nMarks:";
		cin>>mrk;
	}
	void displayMarks()
	{
		display();
		cout<<"\nMarks:"<<mrk;
	}
	double getMarks(){return mrk;}
};
void main()
{
	Number a;
	clrscr();
	a.setData();
	a.display();
	Result b;
	b.setMarks();
	b.displayMarks();
	getch();
	return;
}