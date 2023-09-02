//Template Classes
#include<iostream.h>
#include<conio.h>
template<class P>
class tclass
{
	P var;
	public:
	void setData()
	{
		cout<<"\nData:";
		cin>>var;
	}
	void display()
	{
		cout<<"\nData:"<<var;
	}
};
void main()
{
	clrscr();
	tclass<int> a;
	a.setData();
	a.display();
	tclass<double> b;
	b.setData();
	b.display();
	getch();
	return;
}
