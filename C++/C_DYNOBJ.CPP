#include<iostream.h>
#include<conio.h>
class dynobj
{
	int rno;
	int nos;//subject count
	int *ptr;
	public:
	dynobj()
	{
		rno=0;
		nos=5;
		ptr=NULL;
	}
	dynobj(dynobj &);
	~dynobj(){delete []ptr;}
	void setData(int n);
	void setData();
	void display();
	int total();
	int avg()
	{
		return total()/nos;
	}
};
void dynobj::setData(int n)
{
	rno=n;
	if(ptr!=NULL)
		delete[]ptr;
	cout<<"\nSubject Count:";
	cin>>nos;
	ptr=new int[nos];
	cout<<"\nData:\n";
	for(int i=0;i<nos;i++)
		cin>>ptr[i];
}
void dynobj::setData()
{
	cout<<"\nRoll No.:";
	int n;
	cin>>n;
	setData(n);
}
void dynobj::display()
{
	cout<<"\nRoll No.:"<<rno;
	cout<<"\nSubject Count:"<<nos;
	cout<<"\nData\n";
	for(int i=0;i<nos;i++)
		cout<<" "<<ptr[i];
	cout<<"\nTotal:"<<total();
	cout<<"\nAvg:"<<avg();
}
int dynobj::total()
{
	int i=1,tot=ptr[0];
	while(i<=nos)
		tot+=ptr[i++];
	return tot;
}
dynobj::dynobj(dynobj&t)
{
	rno=t.rno;
	nos=t.nos;
	ptr=new int[nos];
	for(int i=0;i<nos;i++)
		ptr[i]=t.ptr[i];
}
void main()
{
	dynobj a;
	clrscr();
	a.setData(13);
	a.display();
	a.setData(13);
	a.display();
	getch();
}