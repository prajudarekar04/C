//Stack - using array.
#include <iostream>
//#include<conio.h>
using namespace std;
#define M 5
class Stack
{
	int top;
	int arr[M];
	public:
	Stack(){top=-1;}
	~Stack(){}
	void push(int d)
	{
		if(top==M-1)
		{
			cout<<"\nOverFlow\n";
			return;
		}
		top++;
		arr[top]=d;
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"\nUnderFlow";
			return;
		}
		top--;
	}
	int isFull(){return (top==M-1);}
	int isEmpty(){return (top==-1);}
	void display();
	void menu();
};
void Stack::display()
{
	if(isEmpty()==1)
	{
		cout<<"\nStack is Empty";
		return;
	}
	cout<<"\nStack Data\n";
	for(int i=top;i>=0;i--)
		cout<<" "<<arr[i];
}
void Stack::menu()
{
	int opt,d;
	//clrscr();
	while(1)
	{
		cout<<"\nMenu\n1.Push\n2.Pop\n3.Display\n4.Exit\nOption:";
		cin>>opt;
		if(opt>3)
			break;
		switch(opt)
		{
			case 1:
				cout<<"\nData:";
				cin>>d;
				push(d);
				break;
			case 2:
				pop();
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
	Stack s;
	s.menu();
	return 0;
}