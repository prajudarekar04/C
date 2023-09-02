#include<iostream.h>
#include<string.h>
#include<conio.h>
class Array
{
	int x[5];
	public:
	Array();
	Array(int);
	Array(Array &);
	~Array(){}
	void set();
	void set(int);
	//void copy();
	void copy(Array&);
	void reverse();
	void reverseCopy(Array &);
	int get(int pos);//int pos
	void set(int pos,int data);//int pos,int data
	char* toString();
	int isOrdered();
};
char* Array::toString()
{
	int i=0;
	char q[10];
	char *p=new char[100];
	strcpy(p,"Data:\n");
	while(i<5)
	{
		sprintf(q,"%d",x[i]);
		strcat(p,q);
		i++;
	}
	return p;
}
Array::Array()
{
    for(int i=0;i<5;i++)
        x[i]=0;
}
Array::Array(int val)
{
    for(int i=0;i<5;i++)
        x[i]=val;
}
Array::Array(Array &t)
{
    for(int i=0;i<5;i++)
        x[i]=t.x[i];
}
void Array::display()
{
    cout<<"\nData:\n";
    for(int i=0;i<5;i++)
        cout<<" "<<x[i];
}
void Array::set(int val)
{
    for(int i=0;i<5;i++)
        x[i]=val;
}
void Array::set()
{
    cout<<"\nData:\n";
    for(int i=0;i<5;i++)
        cin>>x[i];
}
void Array::copy(Array&t)
{
    for(int i=0;i<5;i++)
        x[i]=t.x[i];
}
void Array::reverse()
{
    int i=0,j=4,tmp;
    while(i<j)
    {
        tmp=x[i];
        x[i]=x[j];
        x[j]=tmp;
        i+++;
        j--;
    }
}
void Array::reverseCopy(Array &t)
{
    int i=0,j=4;
    while(i<4)
    {
        x[i]=t.x[j];
        i++;
        j--;
    }
}
int Array::get(int pos)
{
    return x[pos];
}
void Array::set(int pos,int data)
{
    x[pos]=data;
}
int Array::isOrdered()
{
    int i=1;
    while(i<5)
    {
        if(x[i]<x[i=1])
            break;
        i++;
    }
    return (i==5)?1:0;
}
void main()
{
    Array p(-1);
    p.set();
    p.display();
    cout<<"\n3rd Element:"<<p.get(3);
    p.set(3,24);
    p.display();
    Array q(p);
    q.reverse();
    cout<<q.toString();
    if(q.isOrdered()==0)
        cout<<"Not";
    cout<<"Ordered.";
}