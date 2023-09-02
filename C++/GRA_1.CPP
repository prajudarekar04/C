#include<iostream.h>
#include<graphics.h>
#include<conio.h>
class Point
{
	int x;
	int y;
	int color;
	public:
	Point()
	{
		x=y=color=0;
	}
	Point(int a,int b,int c=15)
	{
		x=a;
		y=b;
		color=c;
	}
	Point(Point &t)
	{
		x=t.x;
		y=t.y;
		color=t.color;
	}
	~Point(){}
	int getx(){return x;}
	int gety(){return y;}
	int getcolor(){return color;}
	void setcolor(int c)
	{
		color=c;
	}
	void setlocation(int a,int b)
	{
		x=a;
		y=b;
	}
	void move(int a,int b)
	{
		x+=a;
		y+=b;
	}
	void draw()
	{
		//setcolor(color);
		putpixel(x,y,color);
	}

};
void main()
{
	clrscr();
	int gd=DETECT,gm;
	//detectgraph(&gd,&gm);
	initgraph(&gd,&gm,'\0');
	Point a(100,100,RED);
	Point b(200,200,GREEN);
	a.draw();
	b.draw();
	b.move(50,50);
	b.draw();
	getch();
	return;
}

/*
class Dimmension
{
	int w;
	int h;
	public:
	Dimension()
	{
		w=h=0;
	}
	Dimension(int a,int b)
	{
		w=a;
		h=b;
	}
	Dimension(Dimension &t)
	{
		w=t.w;
		h=t.h;
	}
	~Dimension(){}
	void setDimension()
	{
		cout<<"\nW:";
		cin>>w;
		cout<<"\nH:";
		cin>>h;
	}
	int getw(){return w;}
	int geth(){return h;}
	void setDimension(int a,int b)
	{
		w=a;
		h=b;
	}
};
void main()
{
}
*/