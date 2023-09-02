//Template
#include<iostream.h>
#include<conio.h>
template<class T>
void display(T var)
{
	cout<<"\nData:"<<var;
}
template<class P>
void input(P &var)
{
	cout<<"\nData:";
	cin>>var;
}
void main()
{
	int a=10;
	char b='A';
	double c=9.2;
	clrscr();
	input(a);
	display(a);
	input(b);
	display(b);
	input(c);
	display(c);
	getch();
	return;
}
/*
//only for template of class T
void main()
{
	int a=10;
	char b='A';
	double c=9.2;
	clrscr();
	display(a);
	display(b);
	display(c);
	getch();
	return;
}
*/