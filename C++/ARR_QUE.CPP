//Queue - using array.
#include <iostream>
//#include<conio.h>
using namespace std;
#define M 5
class Queue
{
	int fr,rr;
	int arr[M];
	public:
	Queue(){rr=-1; fr=0;}
	~Queue();
	int isFull()
	{
		if(rr==M-1)
			return 1;
		else
			return 0;
	}
	int isEmpty(){return (rr<fr);}
	void insert(int d)
	{
		if(isFull())
		{
			cout<<"\nOverFlow\n";
			return;
		}
		rr++;
		arr[rr]=d;
	}
	void remove()
	{
		if(rr<fr)
		{
			cout<<"\nUnderFlow";
			return;
		}
		fr++;
	}
	void display();
	void menu();
};
Queue::~Queue()
{

}
void Queue::display()
{
	int i=fr;
	if(isEmpty())
	{
		cout<<"\nQueue is Empty";
		return;
	}
	cout<<"\nQueue Data\n";
	while(i<=rr)
	{
		cout<<" "<<arr[i];
		i++;
	}
}
void Queue::menu()
{
	int opt,d;
	//clrscr();
	while(1)
	{
		cout<<"\nMenu\n1.Insert\n2.Remove\n3.Display\n4.Exit\nOption:";
		cin>>opt;
		if(opt>3)
			break;
		switch(opt)
		{
			case 1:
				cout<<"\nData:";
				cin>>d;
				insert(d);
				break;
			case 2:
				remove();
				break;
			case 3:
				display();
				break;
		}
	}
	//getch();
}
int main()
{
	Queue q;
	q.menu();
    return 0;
}