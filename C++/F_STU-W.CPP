//to create file containing student record.
#include<iostream.h>
#include<fstream.h>
void main()
{
	int no,mrk;
	char nm[15];
	ofstream sout("stu.txt");
	while(1)
	{
		cout<<"\nRoll No:";
		cin>>no;
		if(no==0)
			break;
		cout<<"\nName:";
		cin>>nm;
		cout<<"\nMarks:";
		cin>>mrk;
		sout<<no<<" "<<nm<<" "<<mrk<<"\n";
	}
	sout.close();
}