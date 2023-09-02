//
#include<iostream.h>
#include<conio.h>
class Marks
{
	int rno;
	int mrk[5];
	public:
	Marks();
	~Marks(){}
	friend istream & operator>>(istream&,Marks&);
	friend ostream & operator<<(ostream&,Marks&);
	int calctot();
	operator int()
	{
		return rno;
	}
	operator double()
	{
		int tot=calctot();
		return double(tot)/5;
	}
};
Marks::Marks()
{
	rno=0;
	for(int i=0;i<5;i++)
		mrk[i]=0;
}
int Marks::calctot()
{
	int tot=mrk[0],i=1;
	while(i<5)
	tot+=mrk[i++];
	return tot;
}
ostream & operator<<(ostream&out,Marks&m)
{
	out<<"\nRoll No.:"<<m.rno;
	out<<"\nMarks:\n";
	for(int i=0;i<5;i++)
	out<<" "<<m.mrk[i];
	return out;
}
istream & operator>>(istream&in,Marks&m)
{
	cout<<"\nRoll No:";
	in>>m.rno;
	cout<<"\nMarks:\n";
	for(int i=0;i<5;i++)
	in>>m.mrk[i];
	return in;
}
void main()
{
	Marks a;
	clrscr();
	cin>>a;
	cout<<a;
	int rno=a;
	cout<<"\nRoll No:"<<rno;
	double mrk=a;
	cout<<"\nAvgMarks:"<<mrk;
	getch();
	return;
}