//Overloading of Template function
#include<iostream.h>
#include<conio.h>
#include<string.h>
void swap(char *a,char*b)
{
	char t[100];
	strcpy(t,a);
	strcpy(a,b);
	strcpy(b,t);
}
template<class T>
void swap(T &a,T &b)
{
	T var=a;
	a=b;
	b=var;
}
void main()
{
	clrscr();
	int a=5,b=7;
	swap(a,b);
	cout<<"\n"<<a<<"\t"<<b;
	char p='+',q='*';
	swap(p,q);
	cout<<"\n"<<p<<"\t"<<q;
	float x=9.2,y=8.7;
	swap(x,y);
	cout<<"\n"<<x<<"\t"<<y;
	char d[]="Hello";
	char c[]="Namaste";
	swap(d,c);
	cout<<"\n"<<d<<"\t"<<c;
	getch();
	return;
}
