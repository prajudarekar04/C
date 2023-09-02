//type conversion class to class by using operator destination member function in source class.
#include<iostream.h>
#include<conio.h>
class Result
{
	int rno;
	double mrk;
	public:
	Result(){ rno=0;mrk=0.0; }
	Result(int a,double b)
	{
		rno=a;
		mrk=b;
	}
	Result(Result&a)
	{
		rno=a.rno;
		mrk=a.mrk;
	}
	/*
	Result(Marks&m)
	{
		no=m;//conversion from marks to int
		mrk=m;//conversion from marks to double
	}*/
	~Result(){}
	void display()
	{
		cout<<"\nRoll No:"<<rno<<"\nMarks:"<<mrk;
	}
};
/*
rno=5 mrk=6.0
*/
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
	operator Result()
	{
		int a=*this;//calls operator int()
		double b=*this;//calls operator double()
		Result r(a,b);
		return r;
	}
};
/*
rno=5 mrk= 6,4,6,6,6
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
	Result r;
	r=m;//type conversion from marks to result
	r.display();
	getch();
	return;
}