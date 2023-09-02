//Oprator Overloading
#include<iostream.h>
#include<string.h>
#include<conio.h>
class Student
{
	int no;
	char nm[15];
	double mrk;
	public:
	Student()
	{
		no=0;
		mrk=0.0;
		nm[0]='\0';
	}
	Student(Student&t)
	{
		no=t.no;
		strcpy(nm,t.nm);
		mrk=t.mrk;
	}
	~Student(){}
	void setData(int a)
	{
		no=a;
		cout<<"\nName:";
		cin>>nm;
		cout<<"\nMarks:";
		cin>>mrk;
	}
	void display()
	{
		cout<<"\nRoll No:"<<no<<"\nName:"<<nm<<"\nMarks:"<<mrk;
	}
	int operator==(int n)
	{
		return(no==n);
	}
	int operator>(int n)
	{
		return(no>n);
	}
	int operator<(int n)
	{
		return(no<n);
	}
	int operator==(Student &t)
	{
		return(no==t.no);
	}
	int operator>(Student &t)
	{
		return(no>t.no);
	}
	int operator<(Student &t)
	{
		return(no<t.no);
	}
};
void main()
{
	Student a,b;
	clrscr();
	a.setData(10);
	a.display();
	if(a==15)
		cout<<"\nMatch.";
	else
		cout<<"\nNot Match.";
	b.setData(14);
	b.display();
	if(a>15)
		cout<<"\n>15";
	else
		cout<<"\n<15";
	if(a>b)
		cout<<"\nA No:";
	else
		cout<<"\nB No:";
	getch();
}