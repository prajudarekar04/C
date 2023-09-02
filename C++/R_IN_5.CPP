//Hierachical
//Array->iArray
//Array->dArray
#include<iostream.h>
#include<conio.h>
class Array
{
	public:
	Array(){}
	~Array(){}
	virtual void input()=0;
	virtual void display()=0;
	virtual void sort()=0;
};
class iArray:public Array
{
	int x[5];
	public:
	iArray():Array(){}
	~iArray(){}
	void input();
	void display();
	void sort();
};
class dArray:public Array
{
	double x[5];
	public:
	dArray():Array(){}
	~dArray(){}
	void input();
	void display();
	void sort();
};
void main()
{
	clrscr();


	getch();
	return;
}