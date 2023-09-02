//
#include<iostream.h>
#include<conio.h>
template<class P>
class tclass
{
	P var;
	public:
	void setData();
	void display();
	void sort();
};
template<class P>
void tclass<P>::setData()
{
	cout<<"\nData:";
	for(int i=0;i<5;i++)
	cin>>var[i];
}
template<class P>
void tclass<P>::display()
{
	cout<<"\nData:";
	for(int i=0;i<5;i++)
		cout<<" "<<var[i];
}
//selection sort
template<class P>
void tclass<P>::sort()
{
	int i=0,j,pos;
	P tmp;
	for(i=0;i<4;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(var[j]<var[pos])
				pos=j;
		}
		if(i!=pos)
		{
			tmp=var[i];
			var[i]=var[pos];
			var[pos]=tmp;
		}
	}
}
void main()
{
	clrscr();
	tclass<int>a;
	a.setData();
	a.display();
	a.sort();
	a.display();
	getch();
	return;
}