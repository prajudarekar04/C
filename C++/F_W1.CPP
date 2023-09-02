#include<iostream.h>
#include<fstream.h>
void main()
{
	ofstream out("abc.txt");
	char ch;
	cout<<"\nData:";
	while(1)
	{
		cin>>ch;
		if(ch=='*')
			break;
		out<<ch;
	}
	out.close();

}