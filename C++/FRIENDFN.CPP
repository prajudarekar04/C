#include<iostream.h>
class Number
{
	int no;
	public:
	void setData()
	{
		cout<<"\nEnter No.:";
		cin>>no;
	}
	void display()
	{
		cout<<"\nNo.:"<<no;
	}
	friend void update(Number&,int);
};
void update(Number&k,int val)
{
	k.no=k.no+val;
}
void main()
{
	Number p;
	p.setData();
	p.display();
	update(p,5);
	p.display();
}