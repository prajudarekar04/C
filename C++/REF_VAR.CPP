//Reference Variable
#include<stdio.h>
void main()
{
	int x=10;
	int &y=x;
	cout<<"\nX:"<<x;
	x/=2;
	cout<<"\nX:"<<y;
	y+=5;
	cout<<"\nX:"<<x;
	x+=4;
	cout<<"\nX:"<<y;
	return;
}