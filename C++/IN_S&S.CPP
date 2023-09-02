//Multiple Hirarchical Inheritance.
//Search & sort
#include<iostream.h>
#include<conio.h>
class Oral
{
	protected:
	int o1,o2;
	public:
	Oral()
	{ o1=o2=0; }
	~Oral(){}
	void setOData()
	{
		cout<<"\nOral Marks:";
		cin>>o1>>o2;
	}
	void displayOral()
	{
		cout<<"\nOral Marks:\no1:"<<o1<<"\nO2:"<<o2;
	}
	int ototal()
	{
		return o1+o2;
	}
};
class Theory
{
	protected:
	int t1,t2,t3;
	public:
	Theory()
	{ t1=t2=t3=0;}
	~Theory(){}
	void setTData()
	{
		cout<<"\nTheory Marks:";
		cin>>t1>>t2>>t3;
	}
	void displayTheory()
	{
		cout<<"\nTheory Marks:\nT1:"<<t1<<"\nT2:"<<t2<<"\nT3"<<t3;
	}
	int ttotal()
	{
		return t1+t2+t3;
	}
};
class Student:public Oral,public Theory
{
	protected:
	int rno;
	char nm[15];
	public:
	~Student(){}
	Student():Oral(),Theory()
	{
		rno=0;
		nm[0]='\0';
	}
	void setSData()
	{
		cout<<"\nRoll No:";
		cin>>rno;
		cout<<"\nName:";
		cin>>nm;
		setTData();
		setOData();
	}
	void displayStudent()
	{
		cout<<"\nRoll No.:"<<rno;
		cout<<"\nName:"<<nm;
		displayTheory();
		cout<<"\nTotal:"<<ttotal();
		displayOral();
		cout<<"\nTotal:"<<ototal();
	}
};
class Result:public Student
{
	protected:
		int otot,ttot;
		int total;
	public:
		~Result(){}
		Result():Student()
		{
			otot=ttot=total=0;
		}
		void setData()
		{
			setSData();
			otot=ototal();
			ttot=ttotal();
			total=otot+ttot;
		}
		void display()
		{
			displayStudent();
			cout<<"\nTotal:"<<total;
		}
};
void main()
{
	clrscr();
	Result s;
	s.setData();
	s.display();
	getch();
	return;
}