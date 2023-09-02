//Constrctor & Destructor.
#include<iostream.h>
class Number
{
	int x,y;
	public:
	Number();
	{
		x=y=0;
		cout<<"\nDefault";
	}
	Number(int a)
	{
		x=y=a;
		cout<<"\nPara";
	}
	Number(int a,int b)
	{
		x=a;
		y=b;
		cout<<"\nPara2";
	}
	Number(Number&t)
	{
		x=t.x;y=t.y;
		cout<<"\nCopy";
	}
	~Number()
	{
		cout<<"\nDestructor";
	}
	void set()
	{
		cout<<"\nX:";cin>>x;
		cout<<"\nY:";cin>>y;
	}
	void display()
	{
		cout<<"\nX:"<<x<<"\nY:"<<y;
	}
	int getx(){return x;}
	int gety(){return y;}
	void setx(int a){x=a;}
	void sety(int b){y=b;}
	Number add(Number&t)
	{
		return Number(x+t.x,y+t.y);
	}
	Number sub(Number&t)
	{
		return Number(x-t.x,y-t.y);
	}
};
void main()
{
	Number a;
	Number b(5);
	{
		Number c(2,4);
		c.display();
	}
	b.display();
	a.set();
	a.display();
	Number c=a.add(b);
	c.display();
}