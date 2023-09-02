//wap to read text file
#include<iostream.h>
#include<fstream.h>
void main()
{
	ifstream in("abc.txt");
	char ch;
	if(!in)
	{
		cout<<"\nFile Not Found.";
		return;
	}
	cout<<"\nData:\n";
	while(1)
	{
		in>>ch;//reads from file
		if(in.eof())
			break;
		cout<<ch;
	}
	in.close();
}