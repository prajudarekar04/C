//to create a file containing numbers.
#include<iostream.h>
#include<fstream.h>
void main()
{
	int no;
	ofstream nout("number.txt");
	while(1)
	{
		cout<<"\nNo:";
		cin>>no;
		if(no==0)
			break;
		nout<<no<<"\n";
	}
	nout.close();
}