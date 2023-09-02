//Defining Member function Outside the class
#include<iostream.h>
#include<conio.h>
template<class P>
class tclass
{
	P var;
	public:
	void setData();
	void display();
};
template<class P>
void tclass<P>::setData()
{
	cout<<"\nData:";
	cin>>var;
}
template<class P>
void tclass<P>::display()
{
	cout<<"\nData:"<<var;
}
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