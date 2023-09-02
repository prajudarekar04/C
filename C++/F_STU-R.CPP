//
#include<iostream.h>
#include<fstream.h>
void main()
{
	int no,mrk;
	char nm[15];
	ifstream sin("stu.txt");
	while(1)
	{
		sin>>no>>nm>>mrk;
		if(sin.eof())
			break;
		cout<<no<<" "<<nm<<" "<<mrk<<"\n";
	}
	sin.close();
	return;

}