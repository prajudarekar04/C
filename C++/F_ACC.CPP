#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
class Account      //size-21byte
{
	int no;
	char nm[15];
	int bal;
	int state;//0-delete	1-valid
	public:
	Account()
	{
		no=bal=0;
		strcpy(nm,"");
		state=1;
	}
	~Account(){}
	int getNo(){return no;}
	char *getName(){return nm;}
	int getBal(){return bal;}
	int getState(){return state;}
	void delRecord(){state=0;}
	void setData(int);
	void display();
};
void Account::setData(int n)
{
	no=n;
	cout<<"\nName:";
	cin>>nm;
	do
	{
		cout<<"\nBalance:";
		cin>>bal;
		if(bal>=500)
			break;
	}while(1);
	state=1;
}
void Account::display()
{
	cout<<"\nA/c Data\nNo:"<<no<<"\nName:"<<nm<<"\nBalance:"<<bal<<"\nState:"<<(state==0)?"Del":"Valid";
}
class AccAMD
{
	Account obj;
	fstream fa;//fstream for reading & writing
	public:
	AccAMD();
	~AccAMD()
	{
		fa.close();
	}
	int search(int);
	void add();
	void mod();
	void del();
	void display();
	void menu();
};
void AccAMD::AccAMD()
{
	fa.open("acc.dat",ios::in|ios::out|ios::binary);
	if(!fa)
	{
		ofstream out;
		out.open("acc.dat",ios::out|ios::binary);//w&b
		out.close();
		fa.open("acc.dat",ios::in|ios::out|ios::binary);
	}
}
//To search record no.wise
//return -1 if record not found Otherwise return begin byte no. of the record
int AccAMD::search(int n)
{
	int pos=0;
	fa.seekg(0,ios::beg);
	//shift get ptr. to byte 0 from begin of file.
	//get ptr. for reading
	//put ptr. for writing
	while(1)
	{
		fa.read((char*)&obj,sizeof(Account));
		if(fa.eof())
		{
			pos=-1;
			fa.clear();//unlocks the locked file.
			break;
		}
		if(obj.getNo()==n)
			break;
		pos=fa.tellg;//fn returns present get ptr. pos. in bytes from begin of file.
	}
	return pos;
}
void AccAMD::add()
{
	int no,pos;
	cout<<"\nA/C No.:";
	cin>>no;
	pos=search(no);
	if(pos>=0)
	{
		cout<<"\nRecord Exists.";
		return ;
	}
	obj.setData(no);
	fa.seekp(0,ios::end);//shifts put ptr. to 0th byte from end of file.
	fa.write((char*)&obj,sizeof(obj));
}
void AccAMD::mod()
{
	int no,pos;
	cout<<"\nA/C No.:";
	cin>>no;
	pos=search(no);
	if(pos==-1||obj.getState==0)
	{
		cout<<"\nRecord Not Exists.";
		return ;
	}
	obj.setData(no);
	fa.seekp(pos,ios::beg);//shifts put ptr. to 0th byte from begin of file.
	fa.write((char*)&obj,sizeof(obj));
}
void AccAMD::del()
{
	int no,pos;
	cout<<"\nA/C No.:";
	cin>>no;
	pos=search(no);
	if(pos==-1||obj.getState==0)
	{
		cout<<"\nRecord Not Exists.";
		return ;
	}
	obj.delRecord(no);
	fa.seekp(pos,ios::beg);//shifts put ptr. to 0th byte from begin of file.
	fa.write((char*)&obj,sizeof(obj));
}
void AccAMD::display()
{
	fa.seekg(0,ios::beg);
	while(1)
	{
		fa.read((char*)&obj,sizeof(obj));
		if(fa.eof())
		{
			fa.clear();
			break;
		}
		obj.display();
	}
	return;
}
void AccAMD::menu()
{
	int opt;
	while(1)
	{
		cout<<"\nMenu\n1.Add\n2.Mod\n3.Del\n4.Display\n5.Exit\nOpt:";
		cin>>opt;
		if(opt>4)
			break;
		switch(opt)
		{
			case 1:
				add();
				break;
			case 2:
				mod();
				break;
			case 3:
				del();
				break;
			case 4:
				display();
		}
	}
}
void menu()
{
	AccAMD p;
	p.menu();
}