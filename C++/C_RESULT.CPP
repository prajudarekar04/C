#include<iostream.h>
#include"array.h"
class Result
{
	int rno;
	Array mrk;
	public:
	Result(){rno=0;}
	~Result(){}
	void setData(int n)
	{

	}
	void setData()
	{

	}
	void display()
	{

	}
	int getNo(){return rno;}
	int total(){return mrk.total();}
	int avg(){return mrk.avg();}
};
void main()
{
	Result a;
	a.setData(23);
	a.display();
}