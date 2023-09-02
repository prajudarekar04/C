//tc_c-c by defining constructed source defination
#include<iostream.h>
#include<conio.h>
class Marks
{
	int rno;
	int mrk[5];
	public:
	Marks();
	~Marks(){}
	friend istream & operator>>(istream&,Marks&);
	friend ostream & operator<<(ostream&,Marks&);
	int calctot();
	operator int()
	{ return rno; }
	operator double()
	{
		int tot=calctot();
		return double(tot)/5;
	}
};
/*
rno=5 mrk= 6,4,6,6,6
*/
class Result
{
	int no;
	double mrk;
	public:
	Result(){ no=0;mrk=0.0; }
	Result(Result&a)
	{
		no=a.no;
		mrk=a.mrk;
	}
	Result(Marks&m)
	{
		no=m;//conversion from marks to int
		mrk=m;//conversion from marks to double
	}
	~Result(){}
	void display()
	{
		cout<<"\nRoll No:"<<no<<"\nMarks:"<<mrk;
	}
};
/*
rno=5 mrk=6.0
*/
Marks::Marks()
{
	rno=0;
	for(int i=0;i<5;i++)
		mrk[i]=0;
}
int Marks::calctot()
{
	int tot=mrk[0],i=1;
	while(i<5)
	tot+=mrk[i++];
	return tot;
}
ostream & operator<<(ostream&out,Marks&m)
{
	out<<"\nRoll No.:"<<m.rno;
	out<<"\nMarks:\n";
	for(int i=0;i<5;i++)
	out<<" "<<m.mrk[i];
	return out;
}
istream & operator>>(istream&in,Marks&m)
{
	cout<<"\nRoll No:";
	in>>m.rno;
	cout<<"\nMarks:\n";
	for(int i=0;i<5;i++)
	in>>m.mrk[i];
	return in;
}

void main()
{
	Marks m;
	clrscr();
	cin>>m;
	cout<<m;
	Result r(m);
	r.display();
	getch();
	return;
}