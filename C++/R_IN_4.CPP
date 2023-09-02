//Run Time Polymorphism
//leat binding-excutition of prg.
#include<iostream.h>
#include<conio.h>
class dim
{
	protected:
	int w,h;
	public:
	dim(){w=h=0;}
	dim(int a,int b)
	{
		w=a;	h=b;
	}
	~dim(){}
	virtual void area()=0;
	//do nothing function
	//pure virtual function
	//class containing pure virtual fu. is known as Abtract class.
	//we cannot create obj to abstract class,but can use ptr. to that class.
	//Pure virtual function makes complusion that......
	void display()
	{
		cout<<"\nWidth:"<<w<<"\nHeight:"<<h<<endl;
	}
};
class Rect:public dim
{
	public:
	Rect():dim(){}
	Rect(int a,int b):dim(a,b){}
	~Rect(){}
	void area()
	{
		cout<<"\nRect Area:"<<w*h<<endl;
	}
};
class Trang:public Rect
{
	public:
	Trang():Rect(){}
	Trang(int a,int b):Rect(a,b){}
	~Trang(){}
	void area()
	{
		cout<<"\nTrang Area:"<<(w*h)/2<<endl;
	}
};
void main()
{
	clrscr();
	dim *ptr;
	ptr=new Rect(10,8);
	ptr->display();
	ptr->area();
	ptr=new Trang(16,9);
	ptr->display();
	ptr->area();
	getch();
	return;
}