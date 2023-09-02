//Memory function definition outside the class.
//Polymorphism & Overloading.
#include<iostream.h>
#include<string.h>
#include<conio.h>
class Student
{
	int rno;
	char nm[15];
	double mrk;
	public:
	void setData();
	void setData(int);
	void setData(int,char*,double);
	void display();
	int getNo(){return rno;}
	double getMarks(){return mrk;}
};
void Student::setData()
{
	cout<<"\nRoll No.:";
	cin>>rno;
	cout<<"\nName:";
	cin>>nm;
	cout<<"\nMarks:";
	cin>>"mrk";
}
void Student::setData(int a)
{
	rno=a;
	cout<<"\nName:";
	cin>>nm;
	cout<<"\nMarks:";
	cin>>mrk;
}
void Student::setData(int a,char*b,double c)
{
	rno=a;
	strcpy(nm,b);
	mrk=c;
}
void Student::display()
{
	cout<<"\nStudent Record\nRoll No.:"<<rno<<"\nName:"<<nm<<"\nMarks:"<<mrk;
}
void main()
{
	Student a;
	clrscr();
	a.setData();
	a.display();
	getch();
	return;
}
/*
//use of new operator to create instance of type student.
void main()
{
	Student *ptr;
	ptr=new Student;
	ptr->setData(21);
	ptr->display();
	delete ptr;
}
//Array of objects of class type student.
void main()
{
	Student [5];
	int i=0;
	while(i<5)
	{
		a[i].setData(i+1);
		i++;
	}
	for(i=0;i<5;i++)
		a[i].display();
}
//
void main()
{
	Student a[5];
	int i=0;
	while(i<5)
	{
		(a+i)->setData(i+1);
		i++;
	}
	for(i=0;i<5;i++)
		a[i].display();
}
*/