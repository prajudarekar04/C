//to copy source file:"abc.txt" with new name "pqr.txt".
#include<iostream.h>
#include<fstream.h>
void main()
{
	ifstream in("abc.txt");
	if(!in)
	{
		cout<<"\nFile Not found.";
		return;
	}
	ofstream out("pqr.txt");
	char ch;
	while(1)
	{
		in>>ch;
		if(in.eof())
			break;
		out<<ch;
	}
	in.close();
	out.close();
	return;
}