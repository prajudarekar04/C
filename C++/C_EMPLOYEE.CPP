//Nesting of objects
#include"mytime.h"
#include<iostream.h>
#include<conio.h>
class Employee
{
	int eno;
	char enm[15];
	int esph;
	MyTime wt;
	public:
	Employee()
	{
		eno=esph=0;
		enm[0]='\0';
	}
	~Employee(){}
	int getNo(){return eno;}
	int getSph(){return esph;}
	MyTime getWt(){return wt;}
	int getSalary()
	{
		return esph*wt.gethr();
	}
	void setData(int no)
	{
		eno=no;
		cout<<"\nEmployee Name:";
		cin>>enm;
		cout<<"\nSalary per hr:";
		cin>>esph;
		cout<<"\nWork Time:";
		wt.setData();
	}
	void setData()
	{
		cout<<"\nEmployee No.:";
		int no;
		cin>>no;
		setData(no);
	}
	void display()
	{
		cout<<"\nEmployee Data\nNo.:"<<eno<<"\nName:"<<enm<<"\nSalary per hr:"<<esph<<"\nWork Data:";
		wt.display();
		cout<<"\nTotal Salary:"<<getSalary();
	}
};
void main()
{
	Employee a;
	clrscr();
	a.setData(123);
	a.display();
	getch();
}