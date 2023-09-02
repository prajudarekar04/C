//
#include<iostream.h>
#include<conio.h>
class Number
{
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
	Number(Number&t)
	{
		no=t.no;
	}
	~Number(){}
	friend istream &operator>>(istream &in,Number&t)
	{
		cout<<"\nEnter No:";
		in>>t.no;
		return in;
	}
	friend ostream &operator<<(ostream &out,Number&t)
	{
		out<<"\nNo:"<<t.no;
		return out;
	}
	Number operator+(int a)
	{
		Number t(no+a);
		return t;
	}
	Number operator-(int a)
	{
		Number t(no-a);
		return t;
	}
	Number operator+(Number&a)
	{
		Number k(no+a.no);
		return k;
	}
	Number operator-(Number &a)
	{
		Number k(no-a.no);
		return k;
	}
	friend Number operator+(int a,Number &t)
	{
		Number k(a+t.no);
		return k;
	}
	friend Number operator-(int a,Number &t)
	{
		Number k(a-t.no);
		return k;
	}
	Number operator+=(int n)
	{
		no=no+n;
		return *this;
	}
	Number operator-=(int n)
	{
		no=no-n;
		return *this;
	}
	Number operator++()
	{
		Number k(++no);
		return k;
	}
	Number operator--()
	{
		Number k(--no);
		return k;
	}
	Number operator++(int)
	{
		Number k(no++);
		return k;
	}
	Number operator--(int)
	{
		Number k(no--);
		return k;
	}
};
void main()
{
	Number a,b,c,d;
	clrscr();
	cin>>a;
	cout<<a;
	b=a+3;
	cout<<a<<b;
	c=a+b;
	cout<<c;
	d=3+b;
	a+=3;//this ptr.
	cout<<a;
	b=++a;//pre-increment
	cout<<a<<b;
	b=a++;//post-increment
	cout<<a<<b;
	getch();
}