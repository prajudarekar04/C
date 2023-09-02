//to read file containing numbers
#include<iostream.h>
#include<fstream.h>
void main()
{
	int no;
	ifstream nin("number.txt");
	while(1)
	{
		nin>>no;
		if(nin.eof())
			break;
		cout<<no<<"\n";
	}
	nin.close();
}