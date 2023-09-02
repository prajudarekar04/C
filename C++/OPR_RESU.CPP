//
#include<iostream.h>
#include<conio.h>
class Result
{
	int no;
	int mrk[5];
	public:
	Result();
	Result(Result&);
	~Result(){}
	friend istream & operator>>(istream&,Result&);
	friend ostream & operator<<(ostream&,Result&);
	int calctot();
	int calcavg()
	{ return(double(calctot())/5); }
	int operator>(int k)
	{ return(no>k); }
	int operator<(int k)
	{ return(no<k); }
	int operator==(int k)
	{ return(no==k);}
	int operator>(double a)
	{ return(calcavg()>a); }
	int operator<(double a)
	{ return(calcavg()<a); }
	int operator>(Result&t)
	{ return(no>t.no); }
	int operator<(Result&t)
	{ return(no<t.no); }
};
Result::Result()
{
	int no=0;
	for(int i=0;i<5;i++)
		mrk[i]=0;
}
Result::Result(Result&t)
{
	int no=t.no;
	for(int i=0;i<5;i++)
		mrk[i]=t.mrk[i];
}
istream & operator>>(istream&in,Result&t)
{
	cout<<"\nRoll No:";
	in>>t.no;
	cout<<"\nMarks:\n";
	for(int i=0;i<5;i++)
		in>>t.mrk[i];
	return in;
}
ostream & operator<<(ostream&out,Result&t)
{
	out<<"\nRoll No:"<<t.no;
	out<<"\nMarks:\n";
	for(int i=0;i<5;i++)
		out<<" "<<t.mrk[i];
	out<<"\nTotal:"<<t.calctot();
	out<<"\nAvg:"<<t.calcavg();
	return out;
}
int Result::calctot()
{
	int tot=mrk[0],i=1;
	while(i<5)
	{
		tot+=mrk[i];
		i++;
	}
	return tot;
}
/*
void main()
{
	Result a;
	clrscr();
	cin>>a;
	cout<<a;
	getch();
}
*/
/*
void main()
{
	Result s,p;
	clrscr();
	cin>>s;
	if(s>70)
	cout<<"\nD group";
	else
	cout<<"\nOther group";
	cout<<s;
	cin>>p;
	if(p>70.38)
	cout<<"\nA Class";
	else
	cout<<"\nPass Class";
	getch();
	return;
}
*/
//Array of Object Type Result
/*
void main()
{
	Result s[5];
	int i=0;
	clrscr();
	while(i<5)
	{
		cin>>s[i];
		i++;
	}
	for(i=0;i<5;i++)
		cout<<s[i];
	getch();
}
*/
//Sorting of objects type Result using Selection Sort.
void main()
{
	Result a[5],tmp;
	int i,j,pos;
	clrscr();
	for(i=0;i<5;i++)
		cin>>a[i];
	cout<<"\nBefore Sorting:";
	for(i=0;i<5;i++)
		cout<<a[i];
	for(i=0;i<5;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
				pos=j;
		}
		if(i!=pos)
		{
			tmp=a[i];
			a[i]=a[pos];
			a[pos]=tmp;
		}
	}
	cout<<"\nAfter Sorting:\n";
	for(i=0;i<5;i++)
		cout<<a[i];
	getch();
	return;
}