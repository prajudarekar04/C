#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
class MyTime
{
	int h,m,s;
	public:
	MyTime()
	{
		h=m=s=0;
	}
	MyTime(int a,int b,int c)
	{
		h=a;m=b;s=c;
	}
	MyTime(long int z)
	{
		h=z/3600;
		z=z%3600;
		m=z/60;
		s=z%60;
	}
	MyTime(MyTime&t)
	{
		h=t.h;m=t.m;s=t.s;
	}
	~MyTime(){}
	friend istream &operator>>(istream&in,MyTime&t)
	{
		cout<<"\nHr.:";in>>t.h;
		cout<<"\nMin.:";in>>t.m;
		cout<<"\nSec.:";in>>t.s;
		return in;
	}
	friend ostream &operator<<(ostream&out,MyTime&t)
	{
		out<<"\nH:"<<t.h<<"\tM:"<<t.m<<"\tS:"<<t.s;
		return out;
	}
	long int toSeconds()
	{
		return h*3600l+m*60+s;
	}
	MyTime operator+(MyTime&t)
	{
		long int a=toSeconds();
		long int b=t.toSeconds();
		MyTime tmp(a+b);
		return tmp;
	}
	MyTime operator-(MyTime&t)
	{
		long int a=toSeconds();
		long int b=t.toSeconds();
		MyTime tmp(labs(a-b));
		return tmp;
	}
	int operator>(MyTime&t)
	{
		long int a=toSeconds();
		long int b=t.toSeconds();
		return(a>b);
	}
	int operator<(MyTime&t)
	{
		long int a=toSeconds();
		long int b=t.toSeconds();
		return(a<b);
	}
	int operator==(MyTime&t)
	{
		long int a=toSeconds();
		long int b=t.toSeconds();
		return(a==b);
	}
};
void main()
{
	MyTime p,q,r;
	clrscr();
	cin>>p>>q;
	r=p+q;
	cout<<p<<q<<r;
	if(p>q)
	cout<<p;
	else
	cout<<q;
	getch();
	return;
}