#include<iostream.h>
#include<conio.h>
#define M 5
class Array
{
	int x[M];
	public:
	void setData();
	void setData(Array&);
	void display();
	int calctot();
	int calcavg()
	{
		return(calctot()/M);
	}
	int findMaxPosition();
	int findMinPosition();
	int findMaxValue()
	{
		return x[findMaxPosition];
	}
	int findMinValue()
	{
		return x[findMinPosition];
	}
	int get(int index)
	{
		return x[index];
	}
	void set(int d,int pos)
	{
		x[pos]=d;
	}
};
void Array::setData()
{
	cout<<"\nArray Data:\n";
	for(int i=0;i<M;i++)
		cin>>x[i];
}
void Array::setData(Array&t)
{
	for(int i=0;i<M;i++)
		x[i]=t.x[i];
}
void Array::display()
{
	cout<<"\nOutput:\n";
	for(int i=0;i<M;i++)
		cout<<" "<<x[i];
}
int Array::calctot()
{
	int tot=x[0],i=1;
	while(i<M)
		tot+=x[i++];
	return tot;
}
int Array::findMaxPosition()
{
	int xpos=0,i=1;
	while(i<M)
	{
		if(x[i]>x[xpos])
			xpos=i;
		i++;
	}
	return xpos;
}
int Array::findMinPosition()
{
	int npos=0,i=1;
	while(i<M)
	{
		if(x[i]<x[npos])
			npos=i;
		i++;
	}
	return npos;
}
void main()
{
	Array p,q;
	clrscr();
	p.setData();
	p.display();
	cout<<"\nTotal:"<<p.calctot();
	cout<<"\nAvg:"<<p.calcavg();
	q.setData(p);
	q.display();
	int tmp=q.get(1);
	q.set(q.get(3),1);
	q.set(tmp,3);
	q.display();
	cout<<"\nMin:"<<q.findMinValue();
	cout<<"\nMax:"<<q.findMaxValue();
	getch();
	return;
}