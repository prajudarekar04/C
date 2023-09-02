//
#include<iostream.h>
#include<conio.h>
class Result
{
	int no;
	double mrk;
	public:
	void setResult()
	{
		cout<<"\nRoll No.:";
		cin>>no;
		cout<<"\nMarks:";
		cin>>mrk;
	}
	void display()
	{
		cout<<"\nRoll No.:"<<no<<"\nMarks:"<<mrk;
	}
	Result(){no=0;mrk=0;}
	~Result(){}
	friend istream &operator>>(istream &in,Result &r)
	{
		cout<<"\nNo:";in>>r.no;
		cout<<"\nMrk:";in>>r.mrk;
		return in;
	}
	friend ostream &operator>>(ostream &out,Result &r)
	{
		out<<"\nNo:"<<r.no<<"\nMarks:"<<r.mrk;
		return out;
	}
};
template<class T>
void input(T &a)
{
	cin>>a;
}
template<class T>
void display(T a)
{
	cout<<"\nData:\n"<<a;
}
template<class P,class Q>
void input(P &a,Q &b)
{
	cout<<"\nValue 1:";
	cin>>a;
	cout<<"\nValue 2:";
	cin>>b;
}
template<class X,class Y>
void display(X &a,Y &b)
{
	cout<<"\nValue 1:"<<a<<"\nValue 2:"<<b;
}
void main()
{
	int p;
	input(p);
	display(p);
	float q;
	input(q);
	display(q);
	Result r;
	input(r);
	display(r);
}